# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# The UpdateService request message will update a service based on name to include the new endpoint and service entry.
# This Request serves as a heartbeat to the Directory.

# Common request header.
bosdyn_msgs/RequestHeader header
bool header_is_set

# The endpoint at which this service may be contacted.
bosdyn_msgs/Endpoint endpoint
bool endpoint_is_set

# New record for service.  The name field is used as lookup key.
bosdyn_msgs/ServiceEntry service_entry
bool service_entry_is_set
