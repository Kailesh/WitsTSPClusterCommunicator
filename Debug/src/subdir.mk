################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ClusterCommunicator.cpp \
../src/DataExtractor.cpp \
../src/DataSender.cpp \
../src/RequestData.cpp \
../src/Requester.cpp \
../src/ResultGenerator.cpp 

OBJS += \
./src/ClusterCommunicator.o \
./src/DataExtractor.o \
./src/DataSender.o \
./src/RequestData.o \
./src/Requester.o \
./src/ResultGenerator.o 

CPP_DEPS += \
./src/ClusterCommunicator.d \
./src/DataExtractor.d \
./src/DataSender.d \
./src/RequestData.d \
./src/Requester.d \
./src/ResultGenerator.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/kailesh/poco_lib/include -I/home/kailesh/Downloads/trunk/jsoncpp/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


