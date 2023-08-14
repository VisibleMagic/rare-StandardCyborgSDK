//
//  CameraCalibrationData.h
//  StandardCyborgSDK
//
//  Created by Siarhei Drasvianski on 09/08/2023.
//  Copyright © 2023 Standard Cyborg. All rights reserved.
//
#import <AVFoundation/AVFoundation.h>

#import "CameraCalibrationData.h"

@interface CameraCalibrationData: NSObject

@property (nonatomic) NSData * _Nullable lensDistortionLookupTable;
@property (nonatomic) NSData * _Nullable inverseLensDistortionLookupTable;
@property (nonatomic) matrix_float4x3 extrinsicMatrix;
@property (nonatomic) matrix_float3x3 intrinsicMatrix;
@property (nonatomic) CGSize intrinsicMatrixReferenceDimensions;

@end
