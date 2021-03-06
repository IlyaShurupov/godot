// This file is generated. Do not edit!
// see https://github.com/hpvb/dynload-wrapper for details
// generated by ./generate-wrapper.py 0.1 on 2021-02-17 13:14:24
// flags: ./generate-wrapper.py --include /usr/include/libudev.h --sys-include <libudev.h> --soname libudev.so.1 --init-name libudev --omit-prefix gnu_ --output-header libudev-so_wrap.h --output-implementation libudev-so_wrap.c
//
#include <dlfcn.h>
#include <stdio.h>
#define udev_ref udev_ref_orig
#define udev_unref udev_unref_orig
#define udev_new udev_new_orig
#define udev_set_log_fn udev_set_log_fn_orig
#define udev_get_log_priority udev_get_log_priority_orig
#define udev_set_log_priority udev_set_log_priority_orig
#define udev_get_userdata udev_get_userdata_orig
#define udev_set_userdata udev_set_userdata_orig
#define udev_list_entry_get_next udev_list_entry_get_next_orig
#define udev_list_entry_get_by_name udev_list_entry_get_by_name_orig
#define udev_list_entry_get_name udev_list_entry_get_name_orig
#define udev_list_entry_get_value udev_list_entry_get_value_orig
#define udev_device_ref udev_device_ref_orig
#define udev_device_unref udev_device_unref_orig
#define udev_device_get_udev udev_device_get_udev_orig
#define udev_device_new_from_syspath udev_device_new_from_syspath_orig
#define udev_device_new_from_devnum udev_device_new_from_devnum_orig
#define udev_device_new_from_subsystem_sysname udev_device_new_from_subsystem_sysname_orig
#define udev_device_new_from_device_id udev_device_new_from_device_id_orig
#define udev_device_new_from_environment udev_device_new_from_environment_orig
#define udev_device_get_parent udev_device_get_parent_orig
#define udev_device_get_parent_with_subsystem_devtype udev_device_get_parent_with_subsystem_devtype_orig
#define udev_device_get_devpath udev_device_get_devpath_orig
#define udev_device_get_subsystem udev_device_get_subsystem_orig
#define udev_device_get_devtype udev_device_get_devtype_orig
#define udev_device_get_syspath udev_device_get_syspath_orig
#define udev_device_get_sysname udev_device_get_sysname_orig
#define udev_device_get_sysnum udev_device_get_sysnum_orig
#define udev_device_get_devnode udev_device_get_devnode_orig
#define udev_device_get_is_initialized udev_device_get_is_initialized_orig
#define udev_device_get_devlinks_list_entry udev_device_get_devlinks_list_entry_orig
#define udev_device_get_properties_list_entry udev_device_get_properties_list_entry_orig
#define udev_device_get_tags_list_entry udev_device_get_tags_list_entry_orig
#define udev_device_get_sysattr_list_entry udev_device_get_sysattr_list_entry_orig
#define udev_device_get_property_value udev_device_get_property_value_orig
#define udev_device_get_driver udev_device_get_driver_orig
#define udev_device_get_devnum udev_device_get_devnum_orig
#define udev_device_get_action udev_device_get_action_orig
#define udev_device_get_seqnum udev_device_get_seqnum_orig
#define udev_device_get_usec_since_initialized udev_device_get_usec_since_initialized_orig
#define udev_device_get_sysattr_value udev_device_get_sysattr_value_orig
#define udev_device_set_sysattr_value udev_device_set_sysattr_value_orig
#define udev_device_has_tag udev_device_has_tag_orig
#define udev_monitor_ref udev_monitor_ref_orig
#define udev_monitor_unref udev_monitor_unref_orig
#define udev_monitor_get_udev udev_monitor_get_udev_orig
#define udev_monitor_new_from_netlink udev_monitor_new_from_netlink_orig
#define udev_monitor_enable_receiving udev_monitor_enable_receiving_orig
#define udev_monitor_set_receive_buffer_size udev_monitor_set_receive_buffer_size_orig
#define udev_monitor_get_fd udev_monitor_get_fd_orig
#define udev_monitor_receive_device udev_monitor_receive_device_orig
#define udev_monitor_filter_add_match_subsystem_devtype udev_monitor_filter_add_match_subsystem_devtype_orig
#define udev_monitor_filter_add_match_tag udev_monitor_filter_add_match_tag_orig
#define udev_monitor_filter_update udev_monitor_filter_update_orig
#define udev_monitor_filter_remove udev_monitor_filter_remove_orig
#define udev_enumerate_ref udev_enumerate_ref_orig
#define udev_enumerate_unref udev_enumerate_unref_orig
#define udev_enumerate_get_udev udev_enumerate_get_udev_orig
#define udev_enumerate_new udev_enumerate_new_orig
#define udev_enumerate_add_match_subsystem udev_enumerate_add_match_subsystem_orig
#define udev_enumerate_add_nomatch_subsystem udev_enumerate_add_nomatch_subsystem_orig
#define udev_enumerate_add_match_sysattr udev_enumerate_add_match_sysattr_orig
#define udev_enumerate_add_nomatch_sysattr udev_enumerate_add_nomatch_sysattr_orig
#define udev_enumerate_add_match_property udev_enumerate_add_match_property_orig
#define udev_enumerate_add_match_sysname udev_enumerate_add_match_sysname_orig
#define udev_enumerate_add_match_tag udev_enumerate_add_match_tag_orig
#define udev_enumerate_add_match_parent udev_enumerate_add_match_parent_orig
#define udev_enumerate_add_match_is_initialized udev_enumerate_add_match_is_initialized_orig
#define udev_enumerate_add_syspath udev_enumerate_add_syspath_orig
#define udev_enumerate_scan_devices udev_enumerate_scan_devices_orig
#define udev_enumerate_scan_subsystems udev_enumerate_scan_subsystems_orig
#define udev_enumerate_get_list_entry udev_enumerate_get_list_entry_orig
#define udev_queue_ref udev_queue_ref_orig
#define udev_queue_unref udev_queue_unref_orig
#define udev_queue_get_udev udev_queue_get_udev_orig
#define udev_queue_new udev_queue_new_orig
#define udev_queue_get_kernel_seqnum udev_queue_get_kernel_seqnum_orig
#define udev_queue_get_udev_seqnum udev_queue_get_udev_seqnum_orig
#define udev_queue_get_udev_is_active udev_queue_get_udev_is_active_orig
#define udev_queue_get_queue_is_empty udev_queue_get_queue_is_empty_orig
#define udev_queue_get_seqnum_is_finished udev_queue_get_seqnum_is_finished_orig
#define udev_queue_get_seqnum_sequence_is_finished udev_queue_get_seqnum_sequence_is_finished_orig
#define udev_queue_get_fd udev_queue_get_fd_orig
#define udev_queue_flush udev_queue_flush_orig
#define udev_queue_get_queued_list_entry udev_queue_get_queued_list_entry_orig
#define udev_hwdb_new udev_hwdb_new_orig
#define udev_hwdb_ref udev_hwdb_ref_orig
#define udev_hwdb_unref udev_hwdb_unref_orig
#define udev_hwdb_get_properties_list_entry udev_hwdb_get_properties_list_entry_orig
#define udev_util_encode_string udev_util_encode_string_orig
#include <libudev.h>
#undef udev_ref
#undef udev_unref
#undef udev_new
#undef udev_set_log_fn
#undef udev_get_log_priority
#undef udev_set_log_priority
#undef udev_get_userdata
#undef udev_set_userdata
#undef udev_list_entry_get_next
#undef udev_list_entry_get_by_name
#undef udev_list_entry_get_name
#undef udev_list_entry_get_value
#undef udev_device_ref
#undef udev_device_unref
#undef udev_device_get_udev
#undef udev_device_new_from_syspath
#undef udev_device_new_from_devnum
#undef udev_device_new_from_subsystem_sysname
#undef udev_device_new_from_device_id
#undef udev_device_new_from_environment
#undef udev_device_get_parent
#undef udev_device_get_parent_with_subsystem_devtype
#undef udev_device_get_devpath
#undef udev_device_get_subsystem
#undef udev_device_get_devtype
#undef udev_device_get_syspath
#undef udev_device_get_sysname
#undef udev_device_get_sysnum
#undef udev_device_get_devnode
#undef udev_device_get_is_initialized
#undef udev_device_get_devlinks_list_entry
#undef udev_device_get_properties_list_entry
#undef udev_device_get_tags_list_entry
#undef udev_device_get_sysattr_list_entry
#undef udev_device_get_property_value
#undef udev_device_get_driver
#undef udev_device_get_devnum
#undef udev_device_get_action
#undef udev_device_get_seqnum
#undef udev_device_get_usec_since_initialized
#undef udev_device_get_sysattr_value
#undef udev_device_set_sysattr_value
#undef udev_device_has_tag
#undef udev_monitor_ref
#undef udev_monitor_unref
#undef udev_monitor_get_udev
#undef udev_monitor_new_from_netlink
#undef udev_monitor_enable_receiving
#undef udev_monitor_set_receive_buffer_size
#undef udev_monitor_get_fd
#undef udev_monitor_receive_device
#undef udev_monitor_filter_add_match_subsystem_devtype
#undef udev_monitor_filter_add_match_tag
#undef udev_monitor_filter_update
#undef udev_monitor_filter_remove
#undef udev_enumerate_ref
#undef udev_enumerate_unref
#undef udev_enumerate_get_udev
#undef udev_enumerate_new
#undef udev_enumerate_add_match_subsystem
#undef udev_enumerate_add_nomatch_subsystem
#undef udev_enumerate_add_match_sysattr
#undef udev_enumerate_add_nomatch_sysattr
#undef udev_enumerate_add_match_property
#undef udev_enumerate_add_match_sysname
#undef udev_enumerate_add_match_tag
#undef udev_enumerate_add_match_parent
#undef udev_enumerate_add_match_is_initialized
#undef udev_enumerate_add_syspath
#undef udev_enumerate_scan_devices
#undef udev_enumerate_scan_subsystems
#undef udev_enumerate_get_list_entry
#undef udev_queue_ref
#undef udev_queue_unref
#undef udev_queue_get_udev
#undef udev_queue_new
#undef udev_queue_get_kernel_seqnum
#undef udev_queue_get_udev_seqnum
#undef udev_queue_get_udev_is_active
#undef udev_queue_get_queue_is_empty
#undef udev_queue_get_seqnum_is_finished
#undef udev_queue_get_seqnum_sequence_is_finished
#undef udev_queue_get_fd
#undef udev_queue_flush
#undef udev_queue_get_queued_list_entry
#undef udev_hwdb_new
#undef udev_hwdb_ref
#undef udev_hwdb_unref
#undef udev_hwdb_get_properties_list_entry
#undef udev_util_encode_string
struct udev* (*udev_ref)(struct udev*);
struct udev* (*udev_unref)(struct udev*);
struct udev* (*udev_new)( void);
void (*udev_set_log_fn)(struct udev*, void*);
int (*udev_get_log_priority)(struct udev*);
void (*udev_set_log_priority)(struct udev*, int);
void* (*udev_get_userdata)(struct udev*);
void (*udev_set_userdata)(struct udev*, void*);
struct udev_list_entry* (*udev_list_entry_get_next)(struct udev_list_entry*);
struct udev_list_entry* (*udev_list_entry_get_by_name)(struct udev_list_entry*,const char*);
const char* (*udev_list_entry_get_name)(struct udev_list_entry*);
const char* (*udev_list_entry_get_value)(struct udev_list_entry*);
struct udev_device* (*udev_device_ref)(struct udev_device*);
struct udev_device* (*udev_device_unref)(struct udev_device*);
struct udev* (*udev_device_get_udev)(struct udev_device*);
struct udev_device* (*udev_device_new_from_syspath)(struct udev*,const char*);
struct udev_device* (*udev_device_new_from_devnum)(struct udev*, char, dev_t);
struct udev_device* (*udev_device_new_from_subsystem_sysname)(struct udev*,const char*,const char*);
struct udev_device* (*udev_device_new_from_device_id)(struct udev*,const char*);
struct udev_device* (*udev_device_new_from_environment)(struct udev*);
struct udev_device* (*udev_device_get_parent)(struct udev_device*);
struct udev_device* (*udev_device_get_parent_with_subsystem_devtype)(struct udev_device*,const char*,const char*);
const char* (*udev_device_get_devpath)(struct udev_device*);
const char* (*udev_device_get_subsystem)(struct udev_device*);
const char* (*udev_device_get_devtype)(struct udev_device*);
const char* (*udev_device_get_syspath)(struct udev_device*);
const char* (*udev_device_get_sysname)(struct udev_device*);
const char* (*udev_device_get_sysnum)(struct udev_device*);
const char* (*udev_device_get_devnode)(struct udev_device*);
int (*udev_device_get_is_initialized)(struct udev_device*);
struct udev_list_entry* (*udev_device_get_devlinks_list_entry)(struct udev_device*);
struct udev_list_entry* (*udev_device_get_properties_list_entry)(struct udev_device*);
struct udev_list_entry* (*udev_device_get_tags_list_entry)(struct udev_device*);
struct udev_list_entry* (*udev_device_get_sysattr_list_entry)(struct udev_device*);
const char* (*udev_device_get_property_value)(struct udev_device*,const char*);
const char* (*udev_device_get_driver)(struct udev_device*);
dev_t (*udev_device_get_devnum)(struct udev_device*);
const char* (*udev_device_get_action)(struct udev_device*);
unsigned long long int (*udev_device_get_seqnum)(struct udev_device*);
unsigned long long int (*udev_device_get_usec_since_initialized)(struct udev_device*);
const char* (*udev_device_get_sysattr_value)(struct udev_device*,const char*);
int (*udev_device_set_sysattr_value)(struct udev_device*,const char*,const char*);
int (*udev_device_has_tag)(struct udev_device*,const char*);
struct udev_monitor* (*udev_monitor_ref)(struct udev_monitor*);
struct udev_monitor* (*udev_monitor_unref)(struct udev_monitor*);
struct udev* (*udev_monitor_get_udev)(struct udev_monitor*);
struct udev_monitor* (*udev_monitor_new_from_netlink)(struct udev*,const char*);
int (*udev_monitor_enable_receiving)(struct udev_monitor*);
int (*udev_monitor_set_receive_buffer_size)(struct udev_monitor*, int);
int (*udev_monitor_get_fd)(struct udev_monitor*);
struct udev_device* (*udev_monitor_receive_device)(struct udev_monitor*);
int (*udev_monitor_filter_add_match_subsystem_devtype)(struct udev_monitor*,const char*,const char*);
int (*udev_monitor_filter_add_match_tag)(struct udev_monitor*,const char*);
int (*udev_monitor_filter_update)(struct udev_monitor*);
int (*udev_monitor_filter_remove)(struct udev_monitor*);
struct udev_enumerate* (*udev_enumerate_ref)(struct udev_enumerate*);
struct udev_enumerate* (*udev_enumerate_unref)(struct udev_enumerate*);
struct udev* (*udev_enumerate_get_udev)(struct udev_enumerate*);
struct udev_enumerate* (*udev_enumerate_new)(struct udev*);
int (*udev_enumerate_add_match_subsystem)(struct udev_enumerate*,const char*);
int (*udev_enumerate_add_nomatch_subsystem)(struct udev_enumerate*,const char*);
int (*udev_enumerate_add_match_sysattr)(struct udev_enumerate*,const char*,const char*);
int (*udev_enumerate_add_nomatch_sysattr)(struct udev_enumerate*,const char*,const char*);
int (*udev_enumerate_add_match_property)(struct udev_enumerate*,const char*,const char*);
int (*udev_enumerate_add_match_sysname)(struct udev_enumerate*,const char*);
int (*udev_enumerate_add_match_tag)(struct udev_enumerate*,const char*);
int (*udev_enumerate_add_match_parent)(struct udev_enumerate*,struct udev_device*);
int (*udev_enumerate_add_match_is_initialized)(struct udev_enumerate*);
int (*udev_enumerate_add_syspath)(struct udev_enumerate*,const char*);
int (*udev_enumerate_scan_devices)(struct udev_enumerate*);
int (*udev_enumerate_scan_subsystems)(struct udev_enumerate*);
struct udev_list_entry* (*udev_enumerate_get_list_entry)(struct udev_enumerate*);
struct udev_queue* (*udev_queue_ref)(struct udev_queue*);
struct udev_queue* (*udev_queue_unref)(struct udev_queue*);
struct udev* (*udev_queue_get_udev)(struct udev_queue*);
struct udev_queue* (*udev_queue_new)(struct udev*);
unsigned long long int (*udev_queue_get_kernel_seqnum)(struct udev_queue*);
unsigned long long int (*udev_queue_get_udev_seqnum)(struct udev_queue*);
int (*udev_queue_get_udev_is_active)(struct udev_queue*);
int (*udev_queue_get_queue_is_empty)(struct udev_queue*);
int (*udev_queue_get_seqnum_is_finished)(struct udev_queue*, unsigned long long int);
int (*udev_queue_get_seqnum_sequence_is_finished)(struct udev_queue*, unsigned long long int, unsigned long long int);
int (*udev_queue_get_fd)(struct udev_queue*);
int (*udev_queue_flush)(struct udev_queue*);
struct udev_list_entry* (*udev_queue_get_queued_list_entry)(struct udev_queue*);
struct udev_hwdb* (*udev_hwdb_new)(struct udev*);
struct udev_hwdb* (*udev_hwdb_ref)(struct udev_hwdb*);
struct udev_hwdb* (*udev_hwdb_unref)(struct udev_hwdb*);
struct udev_list_entry* (*udev_hwdb_get_properties_list_entry)(struct udev_hwdb*,const char*, unsigned);
int (*udev_util_encode_string)(const char*, char*, size_t);int initialize_libudev() {
  void *handle;
  char *error;
  handle = dlopen("libudev.so.1", RTLD_NOW | RTLD_DEEPBIND);
  if (!handle) {
    fprintf(stderr, "%s\n", dlerror());
    return(1);
  }
  dlerror();
// udev_ref
  *(void **) (&udev_ref) = dlsym(handle, "udev_ref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_unref
  *(void **) (&udev_unref) = dlsym(handle, "udev_unref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_new
  *(void **) (&udev_new) = dlsym(handle, "udev_new");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_set_log_fn
  *(void **) (&udev_set_log_fn) = dlsym(handle, "udev_set_log_fn");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_get_log_priority
  *(void **) (&udev_get_log_priority) = dlsym(handle, "udev_get_log_priority");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_set_log_priority
  *(void **) (&udev_set_log_priority) = dlsym(handle, "udev_set_log_priority");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_get_userdata
  *(void **) (&udev_get_userdata) = dlsym(handle, "udev_get_userdata");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_set_userdata
  *(void **) (&udev_set_userdata) = dlsym(handle, "udev_set_userdata");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_list_entry_get_next
  *(void **) (&udev_list_entry_get_next) = dlsym(handle, "udev_list_entry_get_next");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_list_entry_get_by_name
  *(void **) (&udev_list_entry_get_by_name) = dlsym(handle, "udev_list_entry_get_by_name");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_list_entry_get_name
  *(void **) (&udev_list_entry_get_name) = dlsym(handle, "udev_list_entry_get_name");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_list_entry_get_value
  *(void **) (&udev_list_entry_get_value) = dlsym(handle, "udev_list_entry_get_value");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_ref
  *(void **) (&udev_device_ref) = dlsym(handle, "udev_device_ref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_unref
  *(void **) (&udev_device_unref) = dlsym(handle, "udev_device_unref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_udev
  *(void **) (&udev_device_get_udev) = dlsym(handle, "udev_device_get_udev");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_new_from_syspath
  *(void **) (&udev_device_new_from_syspath) = dlsym(handle, "udev_device_new_from_syspath");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_new_from_devnum
  *(void **) (&udev_device_new_from_devnum) = dlsym(handle, "udev_device_new_from_devnum");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_new_from_subsystem_sysname
  *(void **) (&udev_device_new_from_subsystem_sysname) = dlsym(handle, "udev_device_new_from_subsystem_sysname");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_new_from_device_id
  *(void **) (&udev_device_new_from_device_id) = dlsym(handle, "udev_device_new_from_device_id");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_new_from_environment
  *(void **) (&udev_device_new_from_environment) = dlsym(handle, "udev_device_new_from_environment");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_parent
  *(void **) (&udev_device_get_parent) = dlsym(handle, "udev_device_get_parent");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_parent_with_subsystem_devtype
  *(void **) (&udev_device_get_parent_with_subsystem_devtype) = dlsym(handle, "udev_device_get_parent_with_subsystem_devtype");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_devpath
  *(void **) (&udev_device_get_devpath) = dlsym(handle, "udev_device_get_devpath");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_subsystem
  *(void **) (&udev_device_get_subsystem) = dlsym(handle, "udev_device_get_subsystem");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_devtype
  *(void **) (&udev_device_get_devtype) = dlsym(handle, "udev_device_get_devtype");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_syspath
  *(void **) (&udev_device_get_syspath) = dlsym(handle, "udev_device_get_syspath");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_sysname
  *(void **) (&udev_device_get_sysname) = dlsym(handle, "udev_device_get_sysname");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_sysnum
  *(void **) (&udev_device_get_sysnum) = dlsym(handle, "udev_device_get_sysnum");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_devnode
  *(void **) (&udev_device_get_devnode) = dlsym(handle, "udev_device_get_devnode");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_is_initialized
  *(void **) (&udev_device_get_is_initialized) = dlsym(handle, "udev_device_get_is_initialized");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_devlinks_list_entry
  *(void **) (&udev_device_get_devlinks_list_entry) = dlsym(handle, "udev_device_get_devlinks_list_entry");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_properties_list_entry
  *(void **) (&udev_device_get_properties_list_entry) = dlsym(handle, "udev_device_get_properties_list_entry");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_tags_list_entry
  *(void **) (&udev_device_get_tags_list_entry) = dlsym(handle, "udev_device_get_tags_list_entry");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_sysattr_list_entry
  *(void **) (&udev_device_get_sysattr_list_entry) = dlsym(handle, "udev_device_get_sysattr_list_entry");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_property_value
  *(void **) (&udev_device_get_property_value) = dlsym(handle, "udev_device_get_property_value");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_driver
  *(void **) (&udev_device_get_driver) = dlsym(handle, "udev_device_get_driver");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_devnum
  *(void **) (&udev_device_get_devnum) = dlsym(handle, "udev_device_get_devnum");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_action
  *(void **) (&udev_device_get_action) = dlsym(handle, "udev_device_get_action");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_seqnum
  *(void **) (&udev_device_get_seqnum) = dlsym(handle, "udev_device_get_seqnum");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_usec_since_initialized
  *(void **) (&udev_device_get_usec_since_initialized) = dlsym(handle, "udev_device_get_usec_since_initialized");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_get_sysattr_value
  *(void **) (&udev_device_get_sysattr_value) = dlsym(handle, "udev_device_get_sysattr_value");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_set_sysattr_value
  *(void **) (&udev_device_set_sysattr_value) = dlsym(handle, "udev_device_set_sysattr_value");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_device_has_tag
  *(void **) (&udev_device_has_tag) = dlsym(handle, "udev_device_has_tag");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_ref
  *(void **) (&udev_monitor_ref) = dlsym(handle, "udev_monitor_ref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_unref
  *(void **) (&udev_monitor_unref) = dlsym(handle, "udev_monitor_unref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_get_udev
  *(void **) (&udev_monitor_get_udev) = dlsym(handle, "udev_monitor_get_udev");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_new_from_netlink
  *(void **) (&udev_monitor_new_from_netlink) = dlsym(handle, "udev_monitor_new_from_netlink");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_enable_receiving
  *(void **) (&udev_monitor_enable_receiving) = dlsym(handle, "udev_monitor_enable_receiving");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_set_receive_buffer_size
  *(void **) (&udev_monitor_set_receive_buffer_size) = dlsym(handle, "udev_monitor_set_receive_buffer_size");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_get_fd
  *(void **) (&udev_monitor_get_fd) = dlsym(handle, "udev_monitor_get_fd");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_receive_device
  *(void **) (&udev_monitor_receive_device) = dlsym(handle, "udev_monitor_receive_device");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_filter_add_match_subsystem_devtype
  *(void **) (&udev_monitor_filter_add_match_subsystem_devtype) = dlsym(handle, "udev_monitor_filter_add_match_subsystem_devtype");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_filter_add_match_tag
  *(void **) (&udev_monitor_filter_add_match_tag) = dlsym(handle, "udev_monitor_filter_add_match_tag");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_filter_update
  *(void **) (&udev_monitor_filter_update) = dlsym(handle, "udev_monitor_filter_update");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_monitor_filter_remove
  *(void **) (&udev_monitor_filter_remove) = dlsym(handle, "udev_monitor_filter_remove");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_ref
  *(void **) (&udev_enumerate_ref) = dlsym(handle, "udev_enumerate_ref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_unref
  *(void **) (&udev_enumerate_unref) = dlsym(handle, "udev_enumerate_unref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_get_udev
  *(void **) (&udev_enumerate_get_udev) = dlsym(handle, "udev_enumerate_get_udev");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_new
  *(void **) (&udev_enumerate_new) = dlsym(handle, "udev_enumerate_new");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_match_subsystem
  *(void **) (&udev_enumerate_add_match_subsystem) = dlsym(handle, "udev_enumerate_add_match_subsystem");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_nomatch_subsystem
  *(void **) (&udev_enumerate_add_nomatch_subsystem) = dlsym(handle, "udev_enumerate_add_nomatch_subsystem");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_match_sysattr
  *(void **) (&udev_enumerate_add_match_sysattr) = dlsym(handle, "udev_enumerate_add_match_sysattr");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_nomatch_sysattr
  *(void **) (&udev_enumerate_add_nomatch_sysattr) = dlsym(handle, "udev_enumerate_add_nomatch_sysattr");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_match_property
  *(void **) (&udev_enumerate_add_match_property) = dlsym(handle, "udev_enumerate_add_match_property");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_match_sysname
  *(void **) (&udev_enumerate_add_match_sysname) = dlsym(handle, "udev_enumerate_add_match_sysname");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_match_tag
  *(void **) (&udev_enumerate_add_match_tag) = dlsym(handle, "udev_enumerate_add_match_tag");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_match_parent
  *(void **) (&udev_enumerate_add_match_parent) = dlsym(handle, "udev_enumerate_add_match_parent");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_match_is_initialized
  *(void **) (&udev_enumerate_add_match_is_initialized) = dlsym(handle, "udev_enumerate_add_match_is_initialized");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_add_syspath
  *(void **) (&udev_enumerate_add_syspath) = dlsym(handle, "udev_enumerate_add_syspath");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_scan_devices
  *(void **) (&udev_enumerate_scan_devices) = dlsym(handle, "udev_enumerate_scan_devices");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_scan_subsystems
  *(void **) (&udev_enumerate_scan_subsystems) = dlsym(handle, "udev_enumerate_scan_subsystems");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_enumerate_get_list_entry
  *(void **) (&udev_enumerate_get_list_entry) = dlsym(handle, "udev_enumerate_get_list_entry");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_ref
  *(void **) (&udev_queue_ref) = dlsym(handle, "udev_queue_ref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_unref
  *(void **) (&udev_queue_unref) = dlsym(handle, "udev_queue_unref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_udev
  *(void **) (&udev_queue_get_udev) = dlsym(handle, "udev_queue_get_udev");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_new
  *(void **) (&udev_queue_new) = dlsym(handle, "udev_queue_new");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_kernel_seqnum
  *(void **) (&udev_queue_get_kernel_seqnum) = dlsym(handle, "udev_queue_get_kernel_seqnum");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_udev_seqnum
  *(void **) (&udev_queue_get_udev_seqnum) = dlsym(handle, "udev_queue_get_udev_seqnum");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_udev_is_active
  *(void **) (&udev_queue_get_udev_is_active) = dlsym(handle, "udev_queue_get_udev_is_active");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_queue_is_empty
  *(void **) (&udev_queue_get_queue_is_empty) = dlsym(handle, "udev_queue_get_queue_is_empty");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_seqnum_is_finished
  *(void **) (&udev_queue_get_seqnum_is_finished) = dlsym(handle, "udev_queue_get_seqnum_is_finished");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_seqnum_sequence_is_finished
  *(void **) (&udev_queue_get_seqnum_sequence_is_finished) = dlsym(handle, "udev_queue_get_seqnum_sequence_is_finished");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_fd
  *(void **) (&udev_queue_get_fd) = dlsym(handle, "udev_queue_get_fd");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_flush
  *(void **) (&udev_queue_flush) = dlsym(handle, "udev_queue_flush");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_queue_get_queued_list_entry
  *(void **) (&udev_queue_get_queued_list_entry) = dlsym(handle, "udev_queue_get_queued_list_entry");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_hwdb_new
  *(void **) (&udev_hwdb_new) = dlsym(handle, "udev_hwdb_new");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_hwdb_ref
  *(void **) (&udev_hwdb_ref) = dlsym(handle, "udev_hwdb_ref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_hwdb_unref
  *(void **) (&udev_hwdb_unref) = dlsym(handle, "udev_hwdb_unref");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_hwdb_get_properties_list_entry
  *(void **) (&udev_hwdb_get_properties_list_entry) = dlsym(handle, "udev_hwdb_get_properties_list_entry");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
// udev_util_encode_string
  *(void **) (&udev_util_encode_string) = dlsym(handle, "udev_util_encode_string");
  error = dlerror();
  if (error != NULL) {
    fprintf(stderr, "%s\n", error);
  }
return 0;
}
