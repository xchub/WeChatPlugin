//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAttachmentObject.h"

@class NSImage, NSString;

@interface MMMediaAttachmentObject : MMAttachmentObject
{
    NSImage *_iconImage;
    NSString *_titleInfo;
    NSString *_detailInfo;
}

@property(retain, nonatomic) NSString *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *titleInfo; // @synthesize titleInfo=_titleInfo;
@property(retain, nonatomic) NSImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;

@end

