//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBitmapImageRep, NSColorSpace, NSImage;

@interface BCScreenGrab : NSObject
{
    unsigned int _displayID;
    NSImage *_image;
    NSBitmapImageRep *_bitmapRep;
    NSColorSpace *_colorSpace;
}

+ (id)screenGrabForDisplay:(unsigned int)arg1;

@property(retain, nonatomic) NSBitmapImageRep *bitmapRep; // @synthesize bitmapRep=_bitmapRep;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (id)currentScreen;
@property(nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (BOOL)isRetinaScreen;
@property(readonly, nonatomic) struct CGRect screenFrame; // @dynamic screenFrame;

@end

