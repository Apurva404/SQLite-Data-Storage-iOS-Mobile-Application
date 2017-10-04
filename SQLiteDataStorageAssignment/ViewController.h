//
//  ViewController.h
//  SQLiteDataStorageAssignment
//
//  Created by Apurva Kumari on 9/20/17.
//  Copyright © 2017 Apurva Kumari. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) NSString *databasePath;
@property (nonatomic) sqlite3 *myContactDB;

@property (weak, nonatomic)IBOutlet UILabel *SQLitestorage;
@property (weak, nonatomic)IBOutlet UILabel *contactnameLabel;
@property (weak, nonatomic)IBOutlet UILabel *locationLabel;
@property (weak, nonatomic)IBOutlet UILabel *addressLabel;
@property (weak, nonatomic)IBOutlet UILabel *phoneNumberLabel;
@property (weak, nonatomic)IBOutlet UILabel *emailLabel;
@property (weak, nonatomic) IBOutlet UILabel *status;

@property (weak, nonatomic) IBOutlet UITextField *contactname;
@property (weak, nonatomic) IBOutlet UITextField *location;
@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *phoneNumber;
@property (weak, nonatomic) IBOutlet UITextField *email;

@property (weak, nonatomic) IBOutlet UIButton *saveButton;
@property (weak, nonatomic) IBOutlet UIButton *cancelButton;

- (IBAction)saveContact:(id)sender;
- (IBAction)cancel:(id)sender;


@end

