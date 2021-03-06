//
//  Track.h
//  Spotify Notifications
//
//  Created by Mihir Singh on 12/30/13.
//  Copyright (c) 2013 Mihir Singh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SNXTrack : NSObject

@property (copy) NSString *title;
@property (copy) NSString *artist;
@property (copy) NSString *album;
@property (copy) NSImage *albumArt;
@property (copy) NSString *trackID;

- (void)fetchAlbumArt;

@end
