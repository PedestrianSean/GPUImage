#import <Foundation/Foundation.h>
#import "GPUImageContext.h"

@protocol GPUImageTextureOutputDelegate;

@interface GPUImageTextureOutput : NSObject <GPUImageInput>
{
    __weak id<GPUImageTextureDelegate> textureDelegate;
}

@property(readwrite, weak, nonatomic) id<GPUImageTextureOutputDelegate> delegate;
@property(readonly) GLuint texture;
@property(nonatomic) BOOL enabled;

@end

@protocol GPUImageTextureOutputDelegate
- (void)newFrameReadyFromTextureOutput:(GPUImageTextureOutput *)callbackTextureOutput;
@end
