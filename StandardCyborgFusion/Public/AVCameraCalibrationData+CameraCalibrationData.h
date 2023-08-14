//
//  AVCameraCalibrationData+CameraCalibrationData.h
//  StandardCyborgSDK
//
//  Created by Siarhei Drasvianski on 09/08/2023.
//  Copyright © 2023 Standard Cyborg. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CameraCalibrationData;

@interface AVCameraCalibrationData (CameraCalibrationData)
    -(CameraCalibrationData *)proxy;
@end

NS_ASSUME_NONNULL_END
