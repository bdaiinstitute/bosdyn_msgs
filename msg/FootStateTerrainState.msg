# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# Estimated ground coefficient of friction for this foot.
float64 ground_mu_est

# Reference frame name for vector data.
string frame_name

# Foot slip distance rt named frame
geometry_msgs/Vector3 foot_slip_distance_rt_frame
bool foot_slip_distance_rt_frame_is_set

# Foot slip velocity rt named frame
geometry_msgs/Vector3 foot_slip_velocity_rt_frame
bool foot_slip_velocity_rt_frame_is_set

# Ground contact normal rt named frame
geometry_msgs/Vector3 ground_contact_normal_rt_frame
bool ground_contact_normal_rt_frame_is_set

# Mean penetration (meters) of the foot below the ground visual
# surface. For penetrable terrains (gravel/sand/grass etc.) these values are
# positive. Negative values would indicate potential odometry issues.
float64 visual_surface_ground_penetration_mean

# Standard deviation of the visual surface ground penetration.
float64 visual_surface_ground_penetration_std
