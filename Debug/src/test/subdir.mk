################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/test/copy.c \
../src/test/linux_api.c \
../src/test/tee.c 

OBJS += \
./src/test/copy.o \
./src/test/linux_api.o \
./src/test/tee.o 

C_DEPS += \
./src/test/copy.d \
./src/test/linux_api.d \
./src/test/tee.d 


# Each subdirectory must supply rules for building sources it contributes
src/test/%.o: ../src/test/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


