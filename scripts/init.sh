#!/bin/sh

SRC_PATH=${1:-src/main}
OUTPUT_PATH=${2:-dist/main}

echo $SRC_PATH
echo $OUTPUT_PATH

gcc -g $SRC_PATH -o $OUTPUT_PATH

if [ $? != 0 ]; then
  exit 1
fi

$OUTPUT_PATH
