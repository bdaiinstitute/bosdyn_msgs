# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# The frame name which the desired foot_positions are described in.
string se2_frame_name

# Map of foot name to its x,y location in specified frame.
# Required positions for spot: "fl", "fr", "hl", "hr".
bosdyn_msgs/KeyStringValueBosdynMsgsVec2[] foot_positions

# Required foot positional accuracy in meters
# Advised = 0.05 ( 5cm)
# Minimum = 0.02 ( 2cm)
# Maximum = 0.10 (10cm)
float32 accuracy
