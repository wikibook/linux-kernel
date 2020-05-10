#!/bin/bash

KERNEL_TOP_PATH="$( cd "$(dirname "$0")" ; pwd -P )"
OUTPUT="$KERNEL_TOP_PATH/out"
echo "$OUTPUT"

cd linux

make O=$OUTPUT modules_install
cp $OUTPUT/arch/arm/boot/dts/*.dtb /boot/
cp $OUTPUT/arch/arm/boot/dts/overlays/*.dtb* /boot/overlays/
cp $OUTPUT/arch/arm/boot/dts/overlays/README /boot/overlays/
cp $OUTPUT/arch/arm/boot/zImage /boot/kernel7.img
