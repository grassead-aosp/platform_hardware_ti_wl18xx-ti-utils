LOCAL_PATH:= $(call my-dir)

#
# asi
#
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	sdio_access.c \
	device_mode.c \
	log.c \
	asi.c \

LOCAL_C_INCLUDES := \
	$(LOCAL_PATH) \
	$(LOCAL_PATH)/../

ifneq ($(wildcard external/libnl),)
LOCAL_C_INCLUDES += external/libnl/include
else
LOCAL_C_INCLUDES += external/libnl-headers
endif

LOCAL_CFLAGS += -DCONFIG_LIBNL20
LOCAL_MODULE_TAGS := debug

ifneq ($(wildcard external/libnl),)
LOCAL_SHARED_LIBRARIES += libnl
else
LOCAL_STATIC_LIBRARIES := libnl_2
endif

LOCAL_MODULE := asi
include $(BUILD_EXECUTABLE)
