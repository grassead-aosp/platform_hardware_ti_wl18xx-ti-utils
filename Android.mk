LOCAL_DIR:= $(call my-dir)
LOCAL_PATH:= $(LOCAL_DIR)

include $(LOCAL_PATH)/wlconf/Android.mk
LOCAL_PATH=$(LOCAL_DIR)

#
# Calibrator
#
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
        nvs.c \
        misc_cmds.c \
        calibrator.c \
        plt.c \
	wl18xx_plt.c \
        ini.c

LOCAL_CFLAGS := -DCONFIG_LIBNL20
LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)

ifneq ($(wildcard external/libnl),)
LOCAL_C_INCLUDES += external/libnl/include
else
LOCAL_C_INCLUDES += external/libnl-headers
endif

ifneq ($(wildcard external/libnl),)
LOCAL_SHARED_LIBRARIES += libnl
else
LOCAL_STATIC_LIBRARIES := libnl_2
endif
LOCAL_MODULE_TAGS := debug
LOCAL_MODULE := calibrator_18xx

include $(BUILD_EXECUTABLE)


WL_LOGPROXY_CLANG_BROKEN := true
ifneq ($(WL_LOGPROXY_CLANG_BROKEN),true)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	wl_logproxy.c

LOCAL_C_INCLUDES := \
	$(LOCAL_PATH)

ifneq ($(wildcard external/libnl),)
LOCAL_C_INCLUDES += external/libnl/include
else
LOCAL_C_INCLUDES += external/libnl-headers
endif

LOCAL_NO_DEFAULT_COMPILER_FLAGS := true
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../libnl-headers \
	$(TARGET_PROJECT_INCLUDES) $(TARGET_C_INCLUDES)
LOCAL_CFLAGS := $(TARGET_GLOBAL_CFLAGS) $(PRIVATE_ARM_CFLAGS)

LOCAL_CFLAGS += -DCONFIG_LIBNL20=y

LOCAL_MODULE := wl_logproxy
LOCAL_LDFLAGS := -Wl,--no-gc-sections
LOCAL_MODULE_TAGS := debug
ifneq ($(wildcard external/libnl),)
LOCAL_SHARED_LIBRARIES += libnl
else
LOCAL_STATIC_LIBRARIES := libnl_2
endif
LOCAL_MODULE := wl_logproxy

include $(BUILD_EXECUTABLE)
endif

include $(LOCAL_PATH)/hw/Android.mk
LOCAL_PATH=$(LOCAL_DIR)

include $(LOCAL_PATH)/asi/Android.mk
#
# UIM Application
#
#include $(CLEAR_VARS)

#LOCAL_C_INCLUDES:= \
#    $(LOCAL_PATH)/uim_rfkill/ \
#    external/bluetooth/bluez/

#LOCAL_SRC_FILES:= \
#    uim_rfkill/uim.c
#LOCAL_CFLAGS:= -g -c -W -Wall -O2 -D_POSIX_SOURCE
#LOCAL_SHARED_LIBRARIES:= libnetutils
#LOCAL_MODULE_TAGS := eng
#LOCAL_MODULE:=uim-util

#include $(BUILD_EXECUTABLE)
