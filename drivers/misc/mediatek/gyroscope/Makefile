include $(srctree)/drivers/misc/mediatek/Makefile.custom

# In case the platform does NOT support this type of sensors
obj-y   +=  gyroscope.o gyro_factory.o

obj-$(CONFIG_MTK_MPU3050C)	+=  mpu3050c/
obj-$(CONFIG_MTK_MPU6050C)	+=  mpu6050c/
obj-$(CONFIG_MTK_MPU3000)   +=  mpu3000/
obj-$(CONFIG_MTK_MPU3000_NEW)   +=  mpu3000-new/
obj-$(CONFIG_MTK_MPU6050GY_NEW)   +=  mpu6050gy-new/
obj-$(CONFIG_MTK_MPU6050GY)   +=  mpu6050gy/
obj-$(CONFIG_MTK_BMG160)   +=  bmg160/
obj-$(CONFIG_MTK_MPU6515G)   +=  mpu6515/
obj-$(CONFIG_MTK_MPU3050C_NEW)   +=  mpu3050c-new/
obj-$(CONFIG_MTK_ITG1010_NEW)   +=  ITG1010-new/
obj-$(CONFIG_MTK_L3G4200D)   +=  l3g4200d/
obj-$(CONFIG_MTK_L3GD20)   +=  l3gd20/
obj-$(CONFIG_MTK_LSM6DS0)   +=  lsm6ds0/
obj-$(CONFIG_MTK_LSM6DS3)   +=  lsm6ds3gy/
#ifdef VENDOR_EDIT//zhihong.lu@BSP.sensor
obj-$(CONFIG_MTK_LSM6DS3_NEW)   +=  lsm6ds3gy_new/
obj-$(CONFIG_MTK_BMI160)   +=  bmi160_gyro/
#endif
