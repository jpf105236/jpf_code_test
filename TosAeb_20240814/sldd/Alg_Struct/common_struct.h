#pragma once

#define MAX_LANE_NUM 3
#define MAX_LINE_NUM 4
#define MAX_EDGE_NUM 2
#define MAX_LANE_SEG_NUM 3
#define MAX_LINE_SEG_NUM 3
#define MAX_EDGE_SEG_NUM 3
#define MAX_OBJ_NUM 32
#define MAX_TRAJ_POINTS_NUM 30

typedef struct
{
    double e;
    double n;
    double heading;
} DRPosition;

typedef signed long int int64_t;
typedef unsigned long int uint64_t;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int int16_t;
typedef unsigned short int uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef unsigned char bool_t;

typedef struct{
    uint64_t    laneSegId       ;
    bool_t      laneSegValid    ;
    float       laneSegWidth    ;
    float       laneSegStart    ;
    float       laneSegEnd      ;
    uint8_t     laneSegIdx      ;
    uint8_t     centerLineType  ;
    uint16_t    sensorType      ;
    float       laneC0          ;
    float       laneC0Std       ;
    float       laneC1          ;
    float       laneC1Std       ;
    float       laneC2          ;
    float       laneC2Std       ;
    float       laneC3          ;
    float       laneC3Std       ;
    float       laneQuality     ;     //新增

}LaneSeg_Struct;

typedef struct{
    float       laneSegStart    ;
    float       laneSegEnd      ;
    bool_t        laneAttrSegValid;
    uint8_t     laneSegType     ;
    uint8_t     laneSegSource   ;
    float       maxLaneSpeed    ;
    float       minLaneSpeed    ;
    float       recLaneSpeed    ;
    uint8_t     laneSegTransitType;

}LaneAttrSeg_Struct;


typedef struct{
    uint8_t     laneId          ;
    uint8_t     laneDirection   ;
    uint8_t     lanePosition    ;
    float       laneStart       ;
    float       laneEnd         ;
    bool_t        laneStartOutRange ;
    bool_t        laneEndOutRange ;
    float       laneTTLC        ;
    uint8_t     laneTurn        ;
    uint8_t     laneLeftLineNum ;
    /*
        laneLeftLineIDs[0]: left
        laneLeftLineIDs[1]: leftleft
    */
    uint32_t    laneLeftLineIDs[2];
    uint8_t     laneRightLineNum;
    /*
        laneRightLineIDs[0]: right
        laneRightLineIDs[1]: rightright
    */
    uint32_t    laneRightLineIDs[2];
    uint8_t     laneSegNum      ;
    /*
        laneSegs[0]: minus seg
        laneSegs[1]: first seg
        laneSegs[2]: second_seg
    */
    LaneSeg_Struct laneSegs[MAX_LANE_SEG_NUM];
    uint8_t     laneAttrSegNum  ;
    /*
        laneAttrSegs[0]: minus seg
        laneAttrSegs[1]: first seg
        laneAttrSegs[2]: second_seg
    */
    LaneAttrSeg_Struct laneAttrSegs[MAX_LANE_SEG_NUM];
    
}LaneData_Struct;

typedef struct{
    uint32_t    lineSegId       ;
    bool_t        lineSegValid    ;
    uint16_t    sensorType      ;
    float       lineSegWidth    ;
    float       lineSegStart    ;
    float       lineSegEnd      ;
    float       lineC0          ;
    float       lineC0Std       ;
    float       lineC1          ;
    float       lineC1Std       ;
    float       lineC2          ;
    float       lineC2Std       ;
    float       lineC3          ;
    float       lineC3Std       ;
    float       lineQuality     ;     //新增

}LineSeg_Struct;

typedef struct{
    bool_t        lineSegAttrValid;
    float       lineSegStart    ;
    float       lineSegEnd      ;
    uint8_t     lineSegType     ;
    uint8_t     lineSegColor    ;

}LineAttrSeg_Struct;

typedef struct{
    uint32_t    lineId          ;
    uint8_t     linePosition    ;
    float       lineStart       ;
    float       lineEnd         ;
    bool_t        lineStartOutRange ;
    bool_t        lineEndOutRange   ;
    uint8_t     lineSegNum      ;
    /*
        lineSegs[0]: minus seg
        lineSegs[1]: first seg
        lineSegs[2]: second_seg
    */
    LineSeg_Struct lineSegs[MAX_LINE_SEG_NUM];
    uint8_t     lineAttrSegNum  ;
    /*
        lineAttrSegs[0]: minus seg
        lineAttrSegs[1]: first seg
        lineAttrSegs[2]: second_seg
    */
    LineAttrSeg_Struct lineAttrSegs[MAX_LINE_SEG_NUM];

}LineData_Struct;

typedef struct{
    uint32_t    edgeSegId       ;
    bool_t        edgeSegValid    ;
    uint16_t    sensorType      ;
    uint8_t     edgeType        ;
    float       edgeSegStart    ;
    float       edgeSegEnd      ;
    float       lineC0          ;
    float       lineC0Std       ;
    float       lineC1          ;
    float       lineC1Std       ;
    float       lineC2          ;
    float       lineC2Std       ;
    float       lineC3          ;
    float       lineC3Std       ;
    float       edgeHeight      ;
    float       lineQuality     ;

}EdgeSeg_Struct;

typedef struct{
    uint32_t    edgeId          ;
    uint8_t     edgePosition    ;
    float       edgeStart       ;
    float       edgeEnd         ;
    bool_t        edgeEndOutRange ;
    bool_t        edgeStartOutRange ;
    uint8_t     edgeSegNum      ;
    /*
        edgeSegs[0]: minus seg
        edgeSegs[1]: first seg
        edgeSegs[2]: second_seg
    */
    EdgeSeg_Struct edgeSegs[MAX_EDGE_SEG_NUM];

}EdgeData_Struct;


typedef struct
{
    int64_t     timeStamp       ;
    uint8_t     roadStatus      ;
    uint8_t     roadType        ;
    uint8_t     laneNum         ;
    /*
        Road.laneData[0]: Ego_Lane
        Road.laneData[1]: Left_Lane
        Road.laneData[2]: Right_Lane
    */
    LaneData_Struct laneData[MAX_LANE_NUM];
    uint8_t     lineNum         ;
    /*
        Road..lineData[0]: Left_Line
        Road..lineData[1]: Right_Line
        Road..lineData[2]: LeftLeft_Line
        Road..lineData[3]: RightRight_Line    
    */
    LineData_Struct lineData[MAX_LINE_NUM];
    uint8_t     edgeNum         ;
    /*
        Road.edgeData[0]:Left boundary
        Road.edgeData[1]:Right boundary
    */
    EdgeData_Struct edgeData[MAX_EDGE_NUM];

} Road_struct;


typedef struct{
    int64_t     objTimeStamp;
    uint16_t    objID;
    bool_t        objValid;
    float       objExitProb;
    float       objIsobsProb;
    float       objLifeCycle;
    int64_t     fusionType;
    uint8_t     objType;
    float       objTypeProb;
    float       dxCenter;
    float       dxCenterStd;
    float       dyCenter;
    float       dyCenterStd;
    float       dxRef;
    float       dyRef;
    uint8_t     refPosition;
    float       dxRefSurface;
    float       dyRefSurface;
    uint8_t     surfacePos;
    float       vxRel;
    float       vyRel;
    float       axRel;
    float       ayRel;
    float       vxRelStd;
    float       vyRelStd;
    float       axRelStd;
    float       ayRelStd;
    float       vxAbs;
    float       vyAbs;
    float       axAbs;
    float       ayAbs;
    float       vxAbsStd;
    float       vyAbsStd;
    float       axAbsStd;
    float       ayAbsStd;
    float       yawAngle;
    float       yawAngleStd;
    float       azimuthAngle;
    float       azimuthAngleStd;
    float       yawRate;
    float       yawRateStd;
    float       objLength;
    float       objWidth;
    float       objHeight;
    float       objLengthStd;
    float       objWidthStd;
    float       objHeightStd;
    uint8_t     movingStatus;
    uint8_t     movingDirection;
    uint16_t    lightStatus;
    uint16_t    doorStatus;
    bool_t        trailerStatus;
    uint8_t     laneAssign;
    float       laneAssociateConf;
    float       laneLeftPortion;
    float       laneRightPortion;
    float       laneLeftConf;
    float       laneRightConf;
    uint8_t     objIntention;
    float       objIntentionProb;
    float       objTTC;
    float       objLatDist2LaneCenter;
    float       objLatDist2EgoCenter;
    uint8_t     objPosition;

}Object_Struct;

typedef struct{
    int64_t     timeStamp;
    uint8_t     objNum;
    Object_Struct objData[MAX_OBJ_NUM];

}Objects_Struct;

typedef struct
{
    int64_t timeStamp;
    uint8_t objNum;
    Object_Struct objData;

} ObjectAEBLon_Struct;

typedef struct
{
    int64_t timeStamp;
    uint8_t objNum;
    Object_Struct objData[10];

} ObjectAEBLat_Struct;

typedef struct
{
    int64_t timeStamp;
    uint8_t objNum;
    Object_Struct objELKLeft;
    Object_Struct objELKRight;

} ObjectELK_Struct;

typedef struct{
    float       longDist;
    float       latDist;
    float       yaw;
    float       vx;
    float       vy;
    float       yawRate;
    float       ax;
    float       ay;
    float       predTime;
    float       predProb;

}TrajectoryPoint_Struct;

typedef struct{
    uint16_t    objID;
    bool_t        objValid;
    int64_t     predTimeStamp;
    float       predPeriod;
    float       predProb;
    bool_t        isInteractive;
    float       predPiority;
    TrajectoryPoint_Struct  trajectoryPoints[MAX_TRAJ_POINTS_NUM];

}ObjTraj_Struct;

typedef struct{
    int64_t     timeStamp;
    uint8_t     objTrajNum;
    ObjTraj_Struct objTrajData[MAX_OBJ_NUM];

}ObjectsTraj_Struct;

typedef struct{
    int64_t     timeStamp;
    float       indicatedSpd_kph;
    float       vehicleSpd;
    bool_t        vehicleSpdValid;
    float       wheelSpdFL;
    bool_t        wheelSpdFLValid;
    float       wheelSpdFR;
    bool_t        wheelSpdFRValid;
    float       wheelSpdRL;
    bool_t        wheelSpdRLValid;
    float       wheelSpdRR;
    bool_t        wheelSpdRRValid;
    bool_t        wheelDirectionFL;
    bool_t        wheelDirectionFLValid;
    bool_t        wheelDirectionFR;
    bool_t        wheelDirectionFRValid;
    bool_t        wheelDirectionRL;
    bool_t        wheelDirectionRLValid;
    bool_t        wheelDirectionRR;
    bool_t        wheelDirectionRRValid;
    uint8_t     vehicleStandstill;
    bool_t        vehicleStandstillValid;
    uint8_t     vehicleMovingDir;
    bool_t        vehLongAccValid;
    float       vehLongAcc;
    bool_t        vehLatAccValid;
    float       vehLatAcc;
    bool_t        vehYawRateValid;
    float       vehYawRate;
    //
    uint8_t     IBSValid;
    uint8_t     ABSActive;
    uint8_t     HACActive;
    uint8_t     EBDActive;
    uint8_t     AVHActive;
    bool_t        AVHValid;
    uint8_t     TCSStatus;
    uint8_t     TCSMode;
    uint8_t     TCSEnable;
    uint8_t     TCSActive;
    uint8_t     VSEStatus;
    uint8_t     VSEMode;
    uint8_t     HDCStatus;
    //
    uint8_t     brakePedalSts;
    float       brakePedalPos;
    bool_t        brakePedalValid;
    float       masterCylindPress;
    bool_t        masterCylindPressValid;
    uint8_t     EPTBrkStatus;
    bool_t        EPTBrkValid;
    uint8_t     EPBStatus;
    float       accelPdlPos;
    bool_t        accelPdlPosValid;
    bool_t        accelPdlOvRid;
    uint8_t     actualGear;
    uint8_t     shiftLeverPos;
    uint8_t     PTReady;
    float       motorSpd_rpm;
    float       motorMaxDec;
    bool_t        motorMaxDecValid;
    float       motorRecTorq;
    uint8_t     motorTorqMode;
    float       vehicleTorque;
    float       steerAngle_deg;
    bool_t        steerAngleValid;
    float       steerAngleSpd_deg;
    float       driverSteerTorq;
    bool_t        driverSteerTorqValid;
    uint8_t     driverOverride;
    float       EPSSteerCurrentFbk;
    bool_t        EPSSteerCurrentFbkValid;
    uint8_t     EPSLKAResponFbk;
    uint8_t     EPSDriveMode;
    uint8_t     EPSAngleCtrlSts;
    uint8_t     EPSTorqCtrlSts;
    uint8_t     EPSStatus;
    uint16_t    EPSFault;

}Chassis_Struct;

typedef struct{
    int64_t     timeStamp;
    uint16_t    lonCtrlStatus;
    bool_t        lonCtrllValid;
    uint16_t    latCtrlStatus;
    bool_t        latCtrllValid;    

}Controller_Struct;

typedef struct{
    int64_t     timeStamp;
    float       imuLongAccel;
    float       imuLatAccel;
    float       imuGyroZ;
    bool_t        imuLongAccelValid;
    bool_t        imuLatAccelValid;
    bool_t        imuGyroZValid;
    uint8_t     imuStatus;
    float       imuLongAccelBias;
    float       imuLatAccelBias;
    float       imuGyroZBias;
    bool_t        imuBiasValid;

}IMU_Struct;

typedef struct{
    int64_t     timeStamp;
    uint8_t     doorStatus[6];
    bool_t        doorStatusValid[6];
    uint8_t     driverSBRSts;
    bool_t        driverSBRStsValid;
    uint8_t     passSBRSts;
    uint8_t     lightStatus;
    uint8_t     lightRodStatus;
    uint8_t     mirrorStatus[2];
    uint8_t     frontWiperStatus;
    uint8_t     airBagCrashIntensity;
    uint8_t     hodSysStatus;
    uint16_t    hodDetectionStatus;
    uint8_t     driveMode;
    uint8_t     powerMode;
    bool_t        powerModeValid;
    uint8_t     AEBSwitchReq;
    uint8_t     FCWSwitchReq;
    uint8_t     FCWLevel;
    uint8_t     LDWSwitchReq;
    uint8_t     LDWSoundReq;
    uint8_t     LDWVirbrationReq;
    uint8_t     LDWLevel;
    uint8_t     ESASwitchReq;
    uint8_t     MEBSwitchReq;

}Body_Struct;

typedef struct{
    Chassis_Struct      chasssisInfo;
    // Controller_Struct   controllerInfo;
    IMU_Struct          imuInfo;
    Body_Struct         bodyInfo;

}VehicleInfo_Struct;

typedef struct{
    int64_t     timeStamp;
    uint8_t     drivingParkingStatus;
    uint8_t     longFSMStatus;
    uint8_t     latFSMStatus;
    uint8_t     AEBStatus;
    uint8_t     FCWStatus;
    uint8_t     RCWStatus;
    uint8_t     FCTAStatus;
    uint8_t     RCTAStatus;
    uint8_t     TSRStatus;
    uint8_t     TLAStatus;
    uint8_t     DOWStatus;
    uint8_t     BSDStatus;
    uint8_t     LDWStatus;
    uint8_t     LDPStatus;
    uint8_t     IHBCStatus;
    uint8_t     ELKStatus;
    uint8_t     ESAStatus;
    uint8_t     AESStatus;
    uint8_t     MEBStatus;
    uint8_t     ACCStatus;
    uint8_t     ICAStatus;
    uint8_t     NCAStatus;
    uint8_t     ILCAStatus;

}FSMInfo_Struct;

typedef struct
{
    float       t_s;
    float       x_m;
    float       y_m;
    float       z_m;
    float       theta_rad;
    float       kappa_l_m;
    float       dkappa_l_m;
    float       s_m;
    float       v_m_s;
    float       a_m_s2;
    float       da_m_s2;
}PathPoint;

typedef struct
{   
    uint8_t     plan_status;
    uint8_t     plan_failed_reason;
    uint8_t     lat_plan_status;
    uint8_t     lon_plan_status;
    uint8_t     plan_scene;

}PlanNodeStatus;


typedef struct 
{
    int64_t     timeStamp;
    uint8_t     num_traj_pts;
    float       total_traj_length_m;
    PlanNodeStatus plan_node_status;
    PathPoint   traj_pts[MAX_TRAJ_POINTS_NUM];

}TrajectoryOut;

typedef struct{
    uint32_t    obj_id;
    uint8_t     obj_type_enum;
    uint8_t     motion_type_enum;
    uint8_t     motion_tirection_enum;
    float       dx_rel_m;
    float       dy_rel_m;
    float       yaw_rad;
    float       vx_rel_m_s;
    float       vy_rel_m_s;
    float       ax_rel_m_s2;
    float       ay_rel_m_s2;
    float       obj_ttc_s;
    float       obj_width_m;
}EDROut;

typedef struct{
    uint8_t     aeb_sts_enum;
    uint16_t    aeb_sign_type_enum;
    uint8_t     aeb_enable_resp_enum;
    uint8_t     abp_ctrl_req_enum;
    uint8_t     aba_ctrl_req_enum;
    uint8_t     aba_ctrl_level_enum;
    uint8_t     awb_ctrl_req_enum;
    uint8_t     awb_ctrl_level_enum;
    uint16_t    tgt_decel_req_enum;
    float       tgt_aeb_decel_req_m_s2;
    float       tgt_eba_decel_req_m_s2;
    uint8_t     aeb_veh_hld_req_enum;
    uint8_t     aeb_current_cycle_acttime;

    uint8_t     fcw_sts_enum;
    uint16_t    fcw_sign_type_enum;
    uint8_t     fcw_enable_resp_enum;
    uint8_t     fcw_sensitive_level_resp_enum;
    uint8_t     fcw_warn_req_enum;
    uint8_t     fcw_warn_level_enum;
    uint8_t     fcw_lat_warn_req_enum;
    uint8_t     fcw_lat_warn_level_enum;
    uint8_t     fcw_current_cycle_acttime;

    EDROut      aeb_fcw_edr;

}AEBControlOut;

typedef struct
{
    uint8_t     elk_sts_enum;
    uint16_t    elk_sign_type_enum;
    uint8_t     elk_enable_resp_enum;
    uint8_t     elk_ctrl_req_enum;
    uint8_t     elk_warning_type_resp_enum;
    uint8_t     elk_audio_warning_req_enum;
    uint8_t     elk_audio_warning_level_enum;
    uint8_t     elk_strg_whl_vibr_warn_req_enum;
    uint8_t     elk_strg_whl_vibr_warn_level_enum;
    uint8_t     elk_visual_warning;
    uint8_t     elk_active_dirc_enum;
    uint16_t    elk_passive_reason_enum;
    uint8_t     elk_current_cycle_acttime;

} ELKControlOut;

typedef struct
{
    uint8_t     ldw_sts_enum;
    uint16_t    ldw_sign_type_enum;
    uint8_t     lane_assist_enable_resp_enum;
    uint8_t     ldw_sensitive_level_resp_enum;
    uint8_t     ldw_warning_type_resp_enum;
    uint8_t     ldw_audio_warning_req_enum;
    uint16_t    ldw_audio_warning_level_enum;
    uint8_t     ldw_strg_whl_vibr_warn_req_enum;
    uint8_t     ldw_strg_whl_vibr_warn_level_enum;
    uint8_t     ldw_visual_warning;
    uint8_t     ldw_active_dirc_enum;
    uint8_t     ldw_passive_reason_enum;
    uint16_t    ldw_curent_cycle_acttime;
    
    uint8_t     ldp_sts_enum;
    uint16_t    ldp_sign_type_enum;
    uint8_t     ldp_ctrl_req_enum;
    uint8_t     ldp_active_dirc_enum;
    uint16_t    ldp_passive_reason_enum;
    uint16_t    ldp_curent_cycle_acttime;

} LDWLKAControlOut;

typedef struct{
    int64_t     timeStamp;
    float       VehicleSpeedEst;
    uint8_t     VehicleSpeedEstValid;
    float       SteerAngleEst;
    uint8_t     SteerAngleEstValid;
    float       EgoLonAccelEst;
    uint8_t     EgoLonAccelEstValid;
    float       EgoLatAccelEst;
    uint8_t     EgoLatAccelEstValid;
    float       EgoYawRateEst;
    uint8_t     EgoYawRateEstValid;
    float       EgoTrajCurvature;
    uint8_t     EgoTrajCurvatureValid;
    float       EgoRearAxleSlipAngle;
    uint8_t     EgoRearAxleSlipAngleValid;
    float       RoadSlopeAngle;
    uint8_t     RoadSlopeAngleValid;
    float       RoadSlipCoef;
    uint8_t     RoadSlipCoefValid;
    PathPoint   traj_pts[MAX_TRAJ_POINTS_NUM];

}EgoPredOut;