/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMaterialAttachment : NSObject {
    void *context;
    unsigned int glID;
    NSDictionary *options;
    struct CGSize { 
        float width; 
        float height; 
    } size;
    unsigned int target;
}

@property (nonatomic) void*context;
@property (nonatomic) unsigned int glID;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic) unsigned int target;

+ (id)materialAttachmentWithGLKTextureInfo:(id)arg1;

- (void*)context;
- (void)dealloc;
- (unsigned int)glID;
- (id)options;
- (void)setContext:(void*)arg1;
- (void)setGlID:(unsigned int)arg1;
- (void)setOptions:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTarget:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (unsigned int)target;

@end