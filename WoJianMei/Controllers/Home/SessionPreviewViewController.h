//
//  StarSessionViewController.h
//  WoJianMei
//
//  Created by Tom Callon  on 2/21/14.
//
//

#import "PPTableViewController.h"

@interface SessionPreviewViewController : PPTableViewController

{
    UIButton *_playSessionButton;
    UIButton *_commentSessionButton;
    UIButton *_shareSessionButton;
}

@property(nonatomic,retain) IBOutlet UIButton *playSessionButton;
@property(nonatomic,retain) IBOutlet UIButton *commentSessionButton;
@property(nonatomic,retain) IBOutlet UIButton *shareSessionButton;


@end
