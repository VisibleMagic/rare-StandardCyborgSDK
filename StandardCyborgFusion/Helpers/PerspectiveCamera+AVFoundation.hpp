//
//  PerspectiveCamera+AVFoundation.h
//  StandardCyborgFusion
//
//  Created by Aaron Thompson on 12/19/18.
//  Copyright © 2018 Standard Cyborg. All rights reserved.
//

#import <standard_cyborg/sc3d/PerspectiveCamera.hpp>
#import "CameraCalibrationData.h"

extern standard_cyborg::sc3d::PerspectiveCamera PerspectiveCameraFromAVCameraCalibrationData(CameraCalibrationData *calibrationData, size_t pixelsWide, size_t pixelsHigh);
