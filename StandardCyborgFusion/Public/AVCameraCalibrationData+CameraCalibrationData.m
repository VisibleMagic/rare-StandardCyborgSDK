//
//  AVCameraCalibrationData+CameraCalibrationData.m
//  StandardCyborgSDK
//
//  Created by Siarhei Drasvianski on 09/08/2023.
//  Copyright © 2023 Standard Cyborg. All rights reserved.
//

#import "AVCameraCalibrationData+CameraCalibrationData.h"
#import "CameraCalibrationData.h"

@implementation AVCameraCalibrationData (CameraCalibrationData)

- (CameraCalibrationData *)proxy {
    CameraCalibrationData *data = [CameraCalibrationData new];
    data.lensDistortionLookupTable = self.lensDistortionLookupTable;
    data.inverseLensDistortionLookupTable = self.inverseLensDistortionLookupTable;
    data.intrinsicMatrix = self.intrinsicMatrix;
    data.intrinsicMatrixReferenceDimensions = self.intrinsicMatrixReferenceDimensions;
    data.extrinsicMatrix = self.extrinsicMatrix;
    
    return data;
}
@end
