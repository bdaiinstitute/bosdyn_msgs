# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Request message for a time-sync Update RPC.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# Clock synchronization estimate from the previous RPC round-trip, if available.
bosdyn_msgs/TimeSyncEstimate previous_estimate
bool previous_estimate_is_set

# Current best clock synchronization estimate according to server.
bosdyn_msgs/TimeSyncState state
bool state_is_set

# Identifier to verify time sync between robot and client. Assigned upon first Request and
# echoed with each subsequent request.
string clock_identifier
