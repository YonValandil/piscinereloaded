#!/bin/sh
find . -name "*.sh" -print | grep -E -o '[^/]+$'| sed 's/.sh$//'
