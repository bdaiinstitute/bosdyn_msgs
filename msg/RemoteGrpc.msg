# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Call out to another system using the RemoteMission service.

# Host that is running the directory server. Usually, this is just the robot.
string host
# Name of the service in the directory.
string service_name
# Timeout of any single RPC. If the timeout is exceeded, the RPC will fail. The mission service
# treats each failed RPC differently:
# - EstablishSession: An error is returned in LoadMission.
# - Tick: The RPC is retried.
# - Stop: The error is ignored, and the RPC is not retried.
# Omit for a default of 60 seconds.
float32 timeout
# Resources that we will need leases on.
string[] lease_resources
# The list of variables the remote host should receive.
# Variables given can be available at either run-time or compile-time.
# The "key" in KeyValue is the name of the variable as used by the remote system.
bosdyn_msgs/KeyValue[] inputs
