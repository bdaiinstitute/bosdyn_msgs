# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Message describing the overall dock state of the robot, including power & comms connections.  
# Not tied to any particular DockingCommand ID.  
# Note: [*] indicates fields which are only valid if the status is DOCK_STATUS_DOCKED or DOCK_STATUS_DOCKING  
# or DOCK_STATUS_UNDOCKING. 
# Note: [^] indicates fields which are only valid if the status is DOCK_STATUS_DOCKED.  


# Status of if the robot is on dock
bosdyn_msgs/DockStateDockedStatus status

# [*] Type of the dock
bosdyn_msgs/DockType dock_type
# [*] ID of the dock
uint32 dock_id

# [^] Status of power detection from the dock
bosdyn_msgs/DockStateLinkStatus power_status

