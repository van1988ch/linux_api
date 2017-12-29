################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/lib/error_functions.c \
../src/lib/get_num.c 

O_SRCS += \
../src/lib/error_functions.o \
../src/lib/get_num.o 

OBJS += \
./src/lib/error_functions.o \
./src/lib/get_num.o 

C_DEPS += \
./src/lib/error_functions.d \
./src/lib/get_num.d 


# Each subdirectory must supply rules for building sources it contributes
src/lib/%.o: ../src/lib/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


