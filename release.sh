#!/bin/bash

cp build/bin/debug/walt build/bin/release/walt/usr/bin
cp -r src/* build/bin/release/walt/usr/bin
cd build/bin/release
dpkg-deb --build walt