include $(srctree)/drivers/misc/mediatek/Makefile.custom

# Linux driver folder
#ccflags-y += -I$(srctree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)/touchpanel/GT1151/
#ccflags-y += -I$(srctree)/arch/arm/mach-$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)/touchpanel/GT1151/
ccflags-y += -I$(srctree)/drivers/input/touchscreen/mediatek/GT1151/
ccflags-y += -I$(srctree)/drivers/input/touchscreen/mediatek/

obj-y	+=  gt9xx_driver.o
obj-y	+=  goodix_tool.o
obj-y	+=  gt9xx_update.o
obj-y	+=  circle_point.o

