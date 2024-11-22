#include "config.h"
OC_EXTERN(COMPONENT_MOD_NAME,listStart) unsigned long list_start(const unsigned char* type_ptr,size_t size);
OC_EXTERN(COMPONENT_MOD_NAME,listNext) unsigned long list_next(unsigned char* buffer);
OC_EXTERN(COMPONENT_MOD_NAME,listType) long  list_type(const char* address,char* buffer,unsigned long buffer_length);
OC_EXTERN(COMPONENT_MOD_NAME,type) long component_type(const char* address,char* buffer,unsigned long buffer_length);
OC_EXTERN(COMPONENT_MOD_NAME,methodsStartComponent) long methods_start_component(const char* address);
OC_EXTERN(COMPONENT_MOD_NAME,methodsStartValue) long methods_start_value(long descripter);
OC_EXTERN(COMPONENT_MOD_NAME,methodsNext) long methods_next(char* buffer,unsigned long size,unsigned long attributes);
OC_EXTERN(COMPONENT_MOD_NAME,documentationComponent) long documentation_component(const char* address,const char* method,unsigned long method_length,char* buffer,unsigned long buffer_length);
OC_EXTERN(COMPONENT_MOD_NAME,documentationValue) long documentation_value(const char* address,const char* method,unsigned long method_length,char* buffer,unsigned long buffer_length);
OC_EXTERN(COMPONENT_MOD_NAME,invokeComponentMethod) long invoke_component_method(const char* address,const char* method,unsigned long method_length,const char* params);
OC_EXTERN(COMPONENT_MOD_NAME,invokeValue) long invoke_value(unsigned long descripter,const char* params);
OC_EXTERN(COMPONENT_MOD_NAME,invokeValueIndexedRead) long invoke_value_indexed_read(unsigned long descripter,const char* params);
OC_EXTERN(COMPONENT_MOD_NAME,invokeValueIndexedWrite) long invoke_value_indexed_write(unsigned long descripter,const char* params);
OC_EXTERN(COMPONENT_MOD_NAME,invokeValueMethod) long invoke_value_method(unsigned long descripter,const char* method,unsigned long method_length,const char* params);
OC_EXTERN(COMPONENT_MOD_NAME,invokeEnd) long invoke_end(char* buffer,unsigned long length);
OC_EXTERN(COMPONENT_MOD_NAME,invokeCancel) void invoke_cancel();
OC_EXTERN(COMPONENT_MOD_NAME,lastExceptionMessage) long last_exception_message(char* buffer,unsigned long buffer_length);
OC_EXTERN(COMPONENT_MOD_NAME,lastExceptionIsType) long last_exception_is_types(const char* class,unsigned long class_length);

extern long slot(const char* address,unsigned long length);
extern unsigned long debug(unsigned char* address,size_t size);
