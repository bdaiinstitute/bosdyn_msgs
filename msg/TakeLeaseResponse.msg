# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# The TakeLease response returns the lease for the desired resource if it could be obtained.
# In most cases if the resource is managed by the LeaseService, TakeLease
# will succeed. However, in the future policies may be introduced which will prevent
# TakeLease from succeeding and clients should be prepared to handle that
# case.
# If a client obtains a new lease, the client should initiate a
# RetainLease bidirectional streaming request immediately after completion
# of TakeLease.

# Common response header.
bosdyn_msgs/ResponseHeader header
bool header_is_set

# Return status for the request.
bosdyn_msgs/TakeLeaseResponseStatus status

# The lease for the resource. Only set if status field == STATUS_OK.
bosdyn_msgs/Lease lease
bool lease_is_set

# The owner for the lease. Set if status field == STATUS_OK.
bosdyn_msgs/LeaseOwner lease_owner
bool lease_owner_is_set
