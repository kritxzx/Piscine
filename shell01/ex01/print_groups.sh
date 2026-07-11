#!/bin/sh
id -nG | tr ' ' , | tr -d '\n'
