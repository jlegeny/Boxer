/* 
 Copyright (c) 2013 Alun Bestor and contributors. All rights reserved.
 This source file is released under the GNU General Public License 2.0. A full copy of this license
 can be found in this XCode project at Resources/English.lproj/BoxerHelp/pages/legalese.html, or read
 online at [http://www.gnu.org/licenses/gpl-2.0.txt].
 */

#import <AppKit/AppKit.h>

//BXSampleGamesCopy adds Boxer's sample games to the specified path.
//This is moved to an operation so that it can be done as a fire-and-forget
//copy without blocking the main thread.
//Used by BXAppController+BXGamesFolder addSampleGamesToPath:

NS_ASSUME_NONNULL_BEGIN

@interface BXSampleGamesCopy : NSOperation
@property (copy) NSURL *targetURL;
@property (copy) NSURL *sourceURL;

//Create a new copy operation from the specified source path to the specified path.
- (instancetype) initFromSourceURL: (NSURL *)sourceURL
                       toTargetURL: (NSURL *)targetURL DEPRECATED_ATTRIBUTE;

- (instancetype) initWithSourceURL: (NSURL *)sourceURL
                         targetURL: (NSURL *)targetURL;

@end

NS_ASSUME_NONNULL_END