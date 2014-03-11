/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlightLayer : CALayer {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPath { } *_borderPath;
    struct CGPath { } *_clipPath;
    } offset;
}

@property struct CGPath { }* borderPath;
@property struct CGPath { }* clipPath;
@property struct CGPoint { float x1; float x2; } offset;

- (struct CGPath { }*)borderPath;
- (struct CGPath { }*)clipPath;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })offset;
- (void)setBorderPath:(struct CGPath { }*)arg1;
- (void)setClipPath:(struct CGPath { }*)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;

@end