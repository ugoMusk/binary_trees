#!/usr/bin/env bash

file=".gitignore";
main_files="$(ls | grep main.c)";
binary_files=$(find . \! -regex '.*/.*/.*' -executable -type f | sed -e 's%^\./%%');

for bin in $binary_files;do grep -xqF -- "$bin" "$file" || echo "$bin"  >> "$file";done
	   
for mfile in $main_files;do grep -xqF -- "$mfile" "$file" || echo "$mfile" >> "$file";done
