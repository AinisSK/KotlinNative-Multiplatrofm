#!/usr/bin/env bash

cd ..
./gradlew NodeJsApp:clean
./gradlew NodeJsApp:build
cd NodeJsApp
npm i
npm start
