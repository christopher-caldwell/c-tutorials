#!/bin/sh

pwd
sh ./scripts/compile.sh

if [ $? != 0 ]; then
  exit 1
fi

sh ./scripts/run.sh

if [ $? != 0 ]; then
  exit 1
fi
