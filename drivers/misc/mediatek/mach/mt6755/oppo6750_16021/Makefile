
include $(srctree)/drivers/misc/mediatek/Makefile.custom

ifneq ($(CONFIG_ARCH_MTK_PROJECT),)
ARCH_MTK_PROJECT := $(shell echo $(CONFIG_ARCH_MTK_PROJECT))
obj-y   += core/
ifeq ($(CONFIG_MTK_LEGACY),y)
obj-y   += dct/dct/
endif
endif
obj-y   +=  camera/camera/
#obj-y   +=  flashlight/constant_flashlight/
obj-y   +=  vibrator/
obj-y   +=  leds/
obj-y   +=  keypad/
obj-y   +=  sound/
obj-y   +=  accdet/

ifeq ($(CONFIG_MTK_HDMI_SUPPORT),y)
obj-y	+=  hdmi/
endif

obj-$(CONFIG_CUSTOM_KERNEL_ACCELEROMETER) += accelerometer/
obj-$(CONFIG_CUSTOM_KERNEL_GYROSCOPE) += gyroscope/
obj-$(CONFIG_CUSTOM_KERNEL_MAGNETOMETER) += magnetometer/
obj-$(CONFIG_CUSTOM_KERNEL_BAROMETER) += barometer/
#ifdef VENDOR_EDIT//zhihong.lu@BSP.sensor
obj-$(CONFIG_CUSTOM_KERNEL_ALSPS) += alsps/
#endif

ifdef CONFIG_CUSTOM_KERNEL_SENSORHUB
obj-y	+= sensorHub/
endif
