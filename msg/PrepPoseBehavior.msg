# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Defines how and whether we use the "pre-docking" pose.

int8 PREP_POSE_UNKNOWN=0 # Default behavior, equivalent to PREP_POSE_USE_POSE.
int8 PREP_POSE_USE_POSE=1 # Goes to the pre-docking pose before docking.
int8 PREP_POSE_SKIP_POSE=2 # Docks before going to the pre-docking pose.
int8 PREP_POSE_ONLY_POSE=3 # Goes to the pre-docking pose, and then returns SUCCESS without docking.
int8 PREP_POSE_UNDOCK=4 # Use this enum to undock a currently docked robot.

int8 value
