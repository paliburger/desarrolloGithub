//
//  AppDelegate.h
//  desarrolloGithub
//
//  Created by Hebert Adair Rojas Delgado (Vendor) on 22/02/16.
//  Copyright © 2016 Wal-Mart de Mexico S.A.B de C.V. mprojas@wal-mart.com Wal-Mart de Mexico S.A.B de C.V. mprojas@wal-mart.com Personal Details Wal-Mart de Mexico S.A.B de C.V. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

