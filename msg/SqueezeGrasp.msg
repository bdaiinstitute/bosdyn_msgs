# AUTOMATICALLY GENERATED BY PROTO CONVERSION

# A "squeeze grasp" is a top-down grasp where we try to keep both jaws of the gripper in
# contact with the ground and bring the jaws together.  This can allow the robot to pick up
# small objects on the ground.
#
# If you specify a SqueezeGrasp as:
#      allowed:
#          - with no other allowable orientations:
#              then the robot will perform a squeeze grasp.
#          - with at least one other allowable orientation:
#              the robot will attempt to find a normal grasp with that orientation and if it
#              fails, will perform a squeeze grasp.
#      disallowed:
#          - with no other allowable orientations:
#              the robot will perform an unconstrained grasp search and a grasp if a good grasp
#              is found.  If no grasp is found, the robot will report
#              MANIP_STATE_GRASP_PLANNING_NO_SOLUTION
#          - with other allowable orientations:
#              the robot will attempt to find a valid grasp.  If it cannot it will report
#              MANIP_STATE_GRASP_PLANNING_NO_SOLUTION

bool squeeze_grasp_disallowed
