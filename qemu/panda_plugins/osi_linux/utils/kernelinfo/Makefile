obj-m := kernelinfo.o

KERNEL_DIR=/home/fhc/ext800/kernel/panda44/goldfish
# CCPATH=$(ANDROID_NDK_ROOT)/toolchains/arm-linux-androideabi-4.4.3/prebuilt/darwin-x86/bin/
CCPATH_EXT=/home/fhc/ext800/src-android-local/android-4.4.4_r1/prebuilts/gcc/linux-x86/arm/arm-eabi-4.7/bin/arm-eabi-
EXTRA_CFLAGS=-fno-pic
ARCH=arm
SUBARCH=arm

LDFLAGS=-L$(KERNEL_DIR)/include/linux/

all:
	make ARCH=arm CROSS_COMPILE=$(CCPATH_EXT) -C $(KERNEL_DIR) M=$(PWD) modules
clean:
	make -C $(KERNEL_DIR) M=$(PWD) clean
	rm -rf *.c~
	rm -rf *.h~
	rm -rf *.o
	rm -f modules.order
