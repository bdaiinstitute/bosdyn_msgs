# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# The GetServiceEntry response message returns a ServiceEntry for the desired service name.

# Common response Header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# Current status of the request.
bosdyn_msgs/GetServiceEntryResponseStatus status

# The record for the discovered service.  Only set if 'status' field == STATUS_OK.
bosdyn_msgs/ServiceEntry service_entry
bool service_entry_is_set
