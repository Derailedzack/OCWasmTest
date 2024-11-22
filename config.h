#define OC_EXTERN(mod,name) __attribute__((import_module(mod), import_name(#name)))
#define COMPONENT_MOD_NAME "component"
#define COMPUTER_MOD_NAME "computer"