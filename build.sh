#!/bin/bash

mkdir ../build

echo Building...
g++ main.cpp Car.cpp FuelGauge.cpp Logger.cpp -o ../build/puzzle
