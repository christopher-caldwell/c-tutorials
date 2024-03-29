#!/bin/sh

SRC_PATH=${1:-src/main}
OUTPUT_PATH=${2:-dist/main}

# TODO: Test if dist is available, make if not.

printf "\nBuilding file at: $SRC_PATH"
printf "\nExecutable will be written to: $OUTPUT_PATH"
printf "\n\n"

gcc -g src/$SRC_PATH -o $OUTPUT_PATH

if [ $? != 0 ]; then
  exit 1
fi

$OUTPUT_PATH
