#
# Makefile for misc devices that really don't fit anywhere else.
#
#ifdef VENDOR_EDIT
#oppo hufeng add for lens alive test
include $(srctree)/drivers/misc/mediatek/Makefile.custom
#endif
MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
ARCH_MTK_PROJECT := $(subst ",,$(CONFIG_ARCH_MTK_PROJECT))

MTK_CUSTOM_PATH  := $(srctree)/drivers/misc/mediatek

ifneq ($(CONFIG_ARM64), y)
# For arm32, mach folder
MTK_PLATFORM_PATH_ROOT := $(srctree)/arch/arm/mach-$(MTK_PLATFORM)
MTK_PROJECT_PATH_ROOT := $(srctree)/arch/arm/mach-$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)
  ifneq ($(filter y,$(CONFIG_ARCH_MT6752) $(CONFIG_ARCH_MT6732) $(CONFIG_ARCH_MT6595) $(CONFIG_ARCH_MT6795) $(CONFIG_ARCH_MT6735) $(CONFIG_ARCH_MT6735M) $(CONFIG_ARCH_MT6753) $(CONFIG_ARCH_MT6580)),)
    # For armv8 32bit
    MTK_PLATFORM_PATH_ROOT := $(srctree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)
    MTK_PROJECT_PATH_ROOT := $(srctree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)
  endif
else
# For arm64, no mach-xxx folder
MTK_PLATFORM_PATH_ROOT := $(srctree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)
MTK_PROJECT_PATH_ROOT := $(srctree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)
endif




subdir-ccflags-y += -I$(MTK_CUSTOM_PATH)/lens/mt6755/inc


obj-y      += main_lens.o
obj-y      += sub_lens.o
obj-$(CONFIG_MTK_LENS_FM50AF_SUPPORT)      += common/fm50af/
obj-$(CONFIG_MTK_LENS_BU6424AF_SUPPORT)    += common/bu6424af/
obj-$(CONFIG_MTK_LENS_BU6429AF_SUPPORT)    += common/bu6429af/
obj-$(CONFIG_MTK_LENS_DW9714AF_SUPPORT)    += common/dw9714af/
obj-$(CONFIG_MTK_LENS_DW9718AF_SUPPORT)    += common/dw9718af/
obj-$(CONFIG_MTK_LENS_DW9800AF_SUPPORT)    += common/dw9800af/
obj-$(CONFIG_MTK_LENS_LC898212AF_SUPPORT)  += common/lc898212af/
obj-$(CONFIG_MTK_LENS_LC898217AF_SUPPORT)  += common/lc898217af/
