//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVGElement.h"

@class SVGColor;

@interface _SVGGradientStop : SVGElement
{
    SVGColor *_color;
    double _position;
}

+ (id)attributeNames;
+ (id)propertyNames;
+ (id)relationshipNames;

@property(retain, nonatomic) SVGColor *color; // @synthesize color=_color;
@property(nonatomic) double position; // @synthesize position=_position;

@end

