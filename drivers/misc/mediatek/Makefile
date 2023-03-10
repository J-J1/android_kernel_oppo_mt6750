subdir-ccflags-y := -Wframe-larger-than=500

#$(call all-subdir-src-or-makefile)
include $(srctree)/drivers/misc/mediatek/Makefile.custom

#ifdef  VENDOR_EDIT
#xiang.fei@Multimedia, 2015/10/16, Add for audio*/
ifneq ($(filter "oppo6750_15127" "oppo6750_16011" "oppo6750_15129",$(CONFIG_ARCH_MTK_PROJECT)),)
KBUILD_CFLAGS +=   -DOPPO_MTK_MT6750_PROJECT
KBUILD_CPPFLAGS += -DOPPO_MTK_MT6750_PROJECT
CFLAGS_KERNEL +=  -DOPPO_MTK_MT6750_PROJECT
CFLAGS_MODULE +=  -DOPPO_MTK_MT6750_PROJECT
endif
#endif  

#ifdef  VENDOR_EDIT
#yuanyan@Multimedia, 2016/02/23, add for 15131
ifneq ($(filter "oppo6750_15131",$(CONFIG_ARCH_MTK_PROJECT)),)
KBUILD_CFLAGS +=   -DOPPO_MTK_15131_PROJECT
KBUILD_CPPFLAGS += -DOPPO_MTK_15131_PROJECT
CFLAGS_KERNEL +=  -DOPPO_MTK_15131_PROJECT
CFLAGS_MODULE +=  -DOPPO_MTK_15131_PROJECT
endif
#endif

#ifdef  VENDOR_EDIT
#Jianfeng.Qiu@Swdp.Multimedia, 2016/04/18, Modify for 16021
ifneq ($(filter "oppo6750_16021",$(CONFIG_ARCH_MTK_PROJECT)),)
KBUILD_CFLAGS +=   -DOPPO_MTK_16021_PROJECT
KBUILD_CPPFLAGS += -DOPPO_MTK_16021_PROJECT
CFLAGS_KERNEL +=  -DOPPO_MTK_16021_PROJECT
CFLAGS_MODULE +=  -DOPPO_MTK_16021_PROJECT
endif

# For MT6795 FPGA bring-up
ifeq ($(CONFIG_ARCH_MT6795),y)
include $(srctree)/drivers/misc/mediatek/Makefile.mt6795
else

ifneq (,$(filter $(CONFIG_ARCH_MT6735) $(CONFIG_ARCH_MT6735M) $(CONFIG_ARCH_MT6753), y))
include $(srctree)/drivers/misc/mediatek/Makefile.mt6735
else

ifneq (,$(filter $(CONFIG_ARCH_MT6580), y))
include $(srctree)/drivers/misc/mediatek/Makefile.mt6580
else


obj-$(CONFIG_MTK_L2C_SHARE)   += l2c_share/


ifneq (,$(filter $(CONFIG_MTK_SYS_CIRQ) $(CONFIG_MTK_CIRQ), y))
obj-y += cirq/
endif

ifneq (,$(filter $(CONFIG_MTK_SYSTRACKER) $(CONFIG_MTK_SYSTRACKER_V2), y))
obj-y += systracker/
endif

obj-$(CONFIG_MTK_IRQ) += irq/
obj-$(CONFIG_MTK_CPU_STRESS)	+= cpu_stress/
obj-$(CONFIG_MTK_LASTPC)	    += lastpc/
obj-$(CONFIG_MTK_DEBUG_LATCH)	+= debug_latch/
obj-$(CONFIG_MTK_DBG_DUMP) += dbg_dump/

obj-$(CONFIG_MTK_EXTMEM) += exm/
obj-$(CONFIG_MICROTRUST_TEE_SUPPORT) += teei/

obj-$(CONFIG_MTK_CQDMA) += cqdma/

ifneq (,$(filter $(CONFIG_ARCH_MT6755), y))
obj-y	+= ppm/
endif

obj-$(CONFIG_MTK_WATCHPOINT) += watchpoint/
obj-$(CONFIG_MTK_ETM)   += etm/
obj-$(CONFIG_MEDIATEK_SOLUTION) += mach/
obj-$(CONFIG_MTK_MEM)	+= mem/
obj-$(CONFIG_MEDIATEK_SOLUTION)	+= aee/
obj-$(CONFIG_MTK_EMI_MPU)	+= emi_mpu/
obj-$(CONFIG_MTK_EMI_BWL)	+= emi_bwl/
obj-$(CONFIG_MTK_DRAMC) += dramc/

obj-$(CONFIG_MTK_FMRADIO)	+= fmradio/
obj-$(CONFIG_MTK_GPS)	    += gps/
obj-$(CONFIG_MTK_M4U)	+= m4u/
#obj-y	+= mhl/
obj-$(CONFIG_MTPROF)	+= mtprof/
obj-$(CONFIG_MEDIATEK_SOLUTION)	+= sched/
obj-$(CONFIG_MTK_CMDQ) += cmdq/
obj-$(CONFIG_MMPROFILE)	+= mmp/

#obj-$(CONFIG_MTK_VIDEO) += dispsys/
#obj-$(CONFIG_MTK_VIDEOX) += dispsys/
#obj-$(CONFIG_MTK_VIDEOX) += videox/
obj-$(CONFIG_MTK_FB) += video/

obj-$(CONFIG_MTK_AUXADC)	+= auxadc/

obj-$(CONFIG_KEYBOARD_HID)	+= bthid/

obj-$(CONFIG_MTK_EXTMD_CTRL)	+= emd_ctl/

obj-$(CONFIG_MTK_WFD_SUPPORT)  += uibc/

ifneq ($(wildcard $(srctree)/$(src)/met/),)
 
endif

obj-$(CONFIG_MTK_XHCI)   +=  xhci/

obj-$(CONFIG_MTK_RAM_CONSOLE)	+= ram_console/

ifneq ($(CONFIG_MTK_FPGA), y)
obj-$(CONFIG_THERMAL)	+= thermal/
endif

obj-$(CONFIG_MTK_VIDEOCODEC_DRIVER) += videocodec/
obj-$(CONFIG_MTK_MJC_DRIVER) += mjc/
obj-$(CONFIG_MTK_LDVT_VDEC) += vdec/
obj-$(CONFIG_HAVE_XLOG_SUPPORT)	+= xlog/
obj-$(CONFIG_MTK_ATF_LOGGER)   +=  atf_log/
obj-$(CONFIG_MTK_WDT_SUPPORT)		+= wdk/
obj-$(CONFIG_MTK_MT_LOGGER)	+= mt_logger/
obj-$(CONFIG_MD32_SUPPORT)   += md32/

obj-$(CONFIG_MTK_LCM)   += lcm/


obj-$(CONFIG_CUSTOM_KERNEL_SENSORHUB)	+= sensorHub/
ifeq ($(CONFIG_MTK_SENSOR_SUPPORT),y)
obj-$(CONFIG_MTK_HWMON)	    += hwmon/
obj-$(CONFIG_CUSTOM_KERNEL_ALSPS) += alsps/
obj-$(CONFIG_CUSTOM_KERNEL_ACCELEROMETER) += accelerometer/
obj-$(CONFIG_CUSTOM_KERNEL_GYROSCOPE) += gyroscope/
obj-$(CONFIG_CUSTOM_KERNEL_MAGNETOMETER) += magnetometer/
obj-$(CONFIG_CUSTOM_KERNEL_BAROMETER) += barometer/
obj-$(CONFIG_CUSTOM_KERNEL_STEP_COUNTER)	+= step_counter/
obj-$(CONFIG_CUSTOM_KERNEL_SIGNIFICANT_MOTION_SENSOR)	+= step_counter/
obj-$(CONFIG_CUSTOM_KERNEL_ACTIVITY_SENSOR)	+= activity_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_PICK_UP_SENSOR)	+= pick_up_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_SHAKE_SENSOR)	+= shake_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_FACE_DOWN_SENSOR)	+= face_down_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_IN_POCKET_SENSOR)	+= in_pocket_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_PEDOMETER)	+= pedometer/
obj-$(CONFIG_CUSTOM_KERNEL_HEART)	+= heart_rate_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_TILT_DETECTOR_SENSOR)	+= tilt_detector_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_WAKE_GESTURE_SENSOR)	+= wake_gesture_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_GLANCE_GESTURE_SENSOR)	+= glance_gesture_sensor/
obj-$(CONFIG_CUSTOM_KERNEL_BRINGTOSEE_SENSOR)	+= bringtosee/
obj-$(CONFIG_CUSTOM_KERNEL_GRAVITY_SENSOR)	+= gravity/
obj-$(CONFIG_CUSTOM_KERNEL_RV_SENSOR)	+= rotationvector/
obj-$(CONFIG_CUSTOM_KERNEL_LINEARACCEL_SENSOR)	+= linearacceleration/
obj-$(CONFIG_CUSTOM_KERNEL_GRV_SENSOR)	+= gamerotationvector/
obj-$(CONFIG_CUSTOM_KERNEL_GMRV_SENSOR)	+= geomagneticrotationvector/
#ifdef VENDOR_EDIT//zhihong.lu@BSP.sensor
obj-$(CONFIG_CUSTOM_KERNEL_RGB_SENSOR)	+= rgb_sensor/
obj-$(CONFIG_MTK_HALL)   += hall/
#endif

endif

#obj-y	+= matv/
#obj-y	+= touchpanel/
# 

obj-$(CONFIG_MTK_VOW_SUPPORT)	+= vow/

subdir-ccflags-y += -I$(srctree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/include
obj-$(CONFIG_MTK_COMBO)			+= connectivity/
obj-$(CONFIG_MTK_CONN_MD)	+= conn_md/

obj-$(CONFIG_MTK_CCCI_DEVICES)	+=  ccci_util/
obj-$(CONFIG_MTK_NET_CCMNI) +=  ccmni/
obj-$(CONFIG_MTK_CCCI_DRIVER)  +=  ccci/
obj-$(CONFIG_MTK_CCCI_EXT)     +=  dual_ccci/
obj-$(CONFIG_MTK_ECCCI_C2K) += c2k_usb/
obj-$(CONFIG_MTK_ECCCI_DRIVER) +=  eccci/
obj-$(CONFIG_MTK_EEMCS_DRIVER) +=  eemcs/
obj-$(CONFIG_MTK_IRTX_SUPPORT) += irtx/
obj-$(CONFIG_MTK_NFC) += nfc/
obj-$(CONFIG_MTK_MLOG)	+= mlog/


obj-$(CONFIG_MTK_LENS)   += lens/
obj-$(CONFIG_MTK_LASER)	+= laser/
obj-$(CONFIG_MTK_IMGSENSOR)	+= imgsensor/src/


ifeq ($(wildcard $(srctree)/drivers/misc/mediatek/mach/$(MTK_PLATFORM)/$(ARCH_MTK_PROJECT)/cam_cal),)
obj-$(CONFIG_MTK_CAM_CAL)	+= cam_cal/src/
endif

obj-$(CONFIG_MTK_FLASHLIGHT)	+= flashlight/src/

obj-$(CONFIG_MTK_SYNC)	+= sync/

#rtc must compile before power, because they are both in fs_initcall, rtc need initial first for PMIC alarm call back
obj-$(CONFIG_MTK_RTC)	+= rtc/
obj-$(CONFIG_MTK_BOOT)	+= boot/
obj-$(CONFIG_MTK_BOOT_REASON)	+= boot_reason/
obj-$(CONFIG_MTK_CHIP)	+= chip/
obj-$(CONFIG_MTK_GPIO)	+= gpio/
obj-$(CONFIG_MTK_EINT) += eint/
obj-$(CONFIG_MTK_SERIAL)	+= uart/
obj-$(CONFIG_MTK_PMIC_NEW_ARCH)	+= pmic/
obj-$(CONFIG_MTK_PMIC_WRAP)	+= pmic_wrap/

obj-$(CONFIG_MTK_HDMI_SUPPORT)	+= hdmi/
obj-y += ext_disp/

obj-$(CONFIG_MTK_EPD_SUPPORT) += epd/

obj-$(CONFIG_MTK_HIBERNATION) += hibcore/

obj-$(CONFIG_MTK_ACCDET)	+= accdet/
obj-$(CONFIG_MTK_VIBRATOR)	+= vibrator/
obj-$(CONFIG_MTK_KEYPAD)	+= keypad/
obj-$(CONFIG_MTK_SYSENV)	+= sysenv/

ifdef CONFIG_CUSTOM_KERNEL_SSW
ifneq ($(strip $(CONFIG_CUSTOM_KERNEL_SSW)),"")
obj-y	+= ssw/
endif
endif

#obj-$(CONFIG_MTK_CMMB) += cmmbdrv/
obj-$(CONFIG_MTK_DEVAPC_DRIVER)	 += devapc/
obj-$(CONFIG_MTK_DEVINFO_DRIVER) += devinfo/
obj-$(CONFIG_MTK_GPU_SUPPORT)	+= gpu/

obj-$(CONFIG_MTK_ALMK)	+= almk/
obj-$(CONFIG_MTK_JPEG)	+= jpeg/

obj-$(CONFIG_MTK_LEDS)	+= leds/
obj-$(CONFIG_MTK_SECURITY_SW_SUPPORT) += masp/
obj-$(CONFIG_MTK_MMC)	+= mmc-host/
obj-$(CONFIG_MTK_MMC)	+= pmt/
obj-$(CONFIG_MTK_MTD_NAND)	+= nand/
obj-$(CONFIG_MTK_GPT_SCHEME_SUPPORT)	+= partition/
obj-$(CONFIG_MTK_SOUND) += smartpa/

obj-$(CONFIG_MTK_DUM_CHAR)	+= dum-char/

#charge pump
obj-$(CONFIG_CUSTOM_KERNEL_CHARGEPUMP)	+= chargepump/

obj-$(CONFIG_MTK_PMIC)	+= power/
obj-$(CONFIG_MTK_I2C)	+= i2c/
obj-$(CONFIG_MTK_PWM)	+= pwm/
obj-$(CONFIG_MTK_SMI)	+= smi/
obj-$(CONFIG_MTK_BTCVSD) += btcvsd/
obj-$(CONFIG_MTK_SOUND)	+= sound/
obj-$(CONFIG_MTK_SPI)	+= spi/
obj-$(CONFIG_MTK_SPM)	+= spm/

# USB need to after gpio
obj-$(CONFIG_USB_MTK_HDRC)	+= usb20/
obj-$(CONFIG_MTK_USBFSH)	+= usb11/
obj-$(CONFIG_USB_MU3D_DRV)	+= mu3d/
obj-$(CONFIG_USB_MU3D_DRV)	+= mu3phy/
obj-$(CONFIG_MTK_TYPEC_SWITCH)	+= usb_typec/

obj-$(CONFIG_MTK_TEST_XHCI)   +=  xhci_test/

obj-$(CONFIG_MTK_WDT_SUPPORT)		+= wdt/
obj-$(CONFIG_MTK_FREQ_HOPPING)	+= freqhopping/
obj-$(CONFIG_SECURITY_SELINUX)	+= selinux_warning/
# MTK PASR SW flow
obj-$(CONFIG_MTKPASR)	+= mtkpasr/

obj-$(CONFIG_MTK_TC1_FEATURE)	+= tc1_interface/

obj-$(CONFIG_MTK_SWITCH_TX_POWER) += sw_tx_power/

#charge pump
#obj-y	+= chargepump/

#obj-$(CONFIG_MTK_SOUND)	+= smartpa/

obj-$(CONFIG_MTK_BTIF)	+= btif/
obj-$(CONFIG_MTK_POWER_GS)	+= power_gs/
obj-$(CONFIG_MTK_VIDEO) += video/
obj-$(CONFIG_MTK_AEE_MRDUMP) += mrdump/
obj-$(CONFIG_MTK_WMT_CCCI)	+= wmt_ccci/
obj-$(CONFIG_MTK_VCOREFS)	+= vcorefs/

obj-$(CONFIG_TRUSTONIC_TEE_SUPPORT) += gud/
obj-$(CONFIG_TRUSTONIC_TEE_SUPPORT) += secmem/
obj-$(CONFIG_MTK_C2K_SUPPORT) += c2k_ccci/
obj-$(CONFIG_MTK_SCHED_CMP_POWER_AWARE_CONTROLLER)	+=  pa/
obj-$(CONFIG_HMP_POWER_AWARE_CONTROLLER)	+=  pa_hmp/

obj-$(CONFIG_MTK_IN_HOUSE_TEE_SUPPORT) += trustzone/

#power-loss-test
obj-$(CONFIG_PWR_LOSS_MTK_TEST) += power-loss-test/

endif           # end of CONFIG_ARCH_MT6735
endif		# end of CONFIG_ARCH_MT6795
endif       # end of CONFIG_ARCH_MT6580


#obj-y	+= ddr/$(MTK_PLATFORM)/

obj-$(CONFIG_TRUSTONIC_TEE_SUPPORT) += gcpu/
obj-$(CONFIG_MTK_IN_HOUSE_TEE_SUPPORT) += gcpu/

# gator driver is platform-independent
ifeq ($(CONFIG_GATOR_DRIVER),y)
 ifneq ($(wildcard $(srctree)/$(src)/gator-driver/),)
  obj-$(CONFIG_GATOR_DRIVER) += gator-driver/
 endif # gator-driver folder exist
endif  # COFNIG_GATOR_DRIVER is set

obj-$(CONFIG_MTK_MULTIBRIDGE_SUPPORT) += multibridge/

#widevine drm
#Classic DRM
$(info "CONFIG_TRUSTONIC_TEE_SUPPORT = $(CONFIG_TRUSTONIC_TEE_SUPPORT)")
obj-$(CONFIG_TRUSTONIC_TEE_SUPPORT) += secwidevine/
obj-$(CONFIG_MTK_DRAM_LOG_STORE) += log_store/
obj-$(CONFIG_MTK_MULTI_LOG) += multi_log/
obj-y += perf_ux/

#ifdef VENDOR_EDIT//wanghao@BSP.TP
obj-y += oppo_devices_list/
#endif
# ifdef VENDOR_EDIT//yixue.ge@bsp.drv add for oppo project
obj-y += oppo_project/
obj-y += oppo_custom/
# endif

#ifdef VENDOR_EDIT
#//jie.cheng@swdh.sh, 2016/04/15, Add hypnus helper
obj-y     +=  oppo_hypnus/
#endif /* VENDOR_EDIT */

# ifdef VENDOR_EDIT
# Yixue.ge@BSP.drv, 2016/01/21, Add for support oppo dev info
obj-$(CONFIG_OPPO_DEVICE_IFNO) += oppo_devinfo/
# endif

# ifdef VENDOR_EDIT
# yongzhi.zhang@Multimedia, 2016/04/28, add for criticallog in kernel
obj-y     +=  oppo_criticallog/
#endif

#Haitao.Zhou@Prd.BaseDrv, 2015/10/28, Add for FPC normal world driver start
ifeq ($(CONFIG_FINGERPRINT_SUPPORT),y)
obj-y += fpc/
endif
#Haitao.Zhou@Prd.BaseDrv, 2015/10/28, Add for FPC normal world driver end
