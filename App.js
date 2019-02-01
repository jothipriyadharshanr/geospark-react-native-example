/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */

import React, {Component} from 'react';
import GeoSpark from 'react-native-geospark-test';

import { Platform,
  StyleSheet,
  Text,
  Scrollview,
  TouchableOpacity,
  View} from 'react-native';



const instructions = Platform.select({
  ios: 'Press Cmd+R to reload,\n' + 'Cmd+D or shake for dev menu',
  android:
    'Double tap R on your keyboard to reload,\n' +
    'Shake or press menu button for dev menu',
});

type Props = {};
export default class App extends Component<Props> {
  render() {
    return (
      <View style={styles.container}>
               <TouchableOpacity
                    onPress={() => {
                        GeoSpark.requestLocationPermission();
                    }}>
                    <Text style={styles.welcome}>
                        RequestLocation
                    </Text>
                </TouchableOpacity>

                <TouchableOpacity
                    onPress={() => {
                        GeoSpark.requestMotionPermission();
                    }}>
                    <Text style={styles.welcome}>
                        RequestMotion
                    </Text>
                </TouchableOpacity>

                <TouchableOpacity
                    onPress={() => {
                        GeoSpark.createUser("Reactnative",
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        Create user
                    </Text>
                </TouchableOpacity>

                 <TouchableOpacity
                    onPress={() => {
                        GeoSpark.getUser("5c347b8a9533a356e2802785",
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        GetUser
                    </Text>
                </TouchableOpacity>

                <TouchableOpacity
                    onPress={() => {
                        GeoSpark.setDescription("Text react-native",
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        setDescription
                    </Text>

                </TouchableOpacity>

                <TouchableOpacity
                    onPress={() => {
                        GeoSpark.startTracking();
                    }}>
                    <Text style={styles.welcome}>
                        StartTracking
                    </Text>
                </TouchableOpacity>

                <TouchableOpacity
                    onPress={() => {
                        GeoSpark.stopTracking();
                    }}>
                    <Text style={styles.welcome}>
                        StopTracking
                    </Text>
                </TouchableOpacity>

                 <TouchableOpacity
                    onPress={() => {
                        GeoSpark.startTrip("startTrip1",
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        StartTrip
                    </Text>
                </TouchableOpacity>

                 <TouchableOpacity
                    onPress={() => {
                        GeoSpark.activeTrips(
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        ActiveTrips
                    </Text>
                </TouchableOpacity>

                <TouchableOpacity
                    onPress={() => {
                        GeoSpark.endTrip("startTrip1",
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        EndTrip
                    </Text>
                </TouchableOpacity>

                 <TouchableOpacity
                    onPress={() => {
                        GeoSpark.createGeofence(12.32232,12.232,200,180,
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        CreateGeofence
                    </Text>
                </TouchableOpacity>

                 <TouchableOpacity
                    onPress={() => {
                        GeoSpark.deleteGeofence("addfsf",
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        DeleteGeofence
                    </Text>
                </TouchableOpacity>

                <TouchableOpacity
                    onPress={() => {
                        GeoSpark.geofenceList(
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        GeofenceList
                    </Text>
                </TouchableOpacity>

                 <TouchableOpacity
                    onPress={() => {
                        GeoSpark.logout(
                            (successMsg) => {
                                console.log(successMsg)
                                alert(successMsg.toString());
                            },
                            (errorMsg) => {
                                console.error(errorMsg)
                                alert(errorMsg.toString());
                            }
                        );
                    }}>
                    <Text style={styles.welcome}>
                        Logout
                    </Text>
                </TouchableOpacity>
      </View>
      
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#F5FCFF',
  },
  welcome: {
    fontSize: 20,
    textAlign: 'center',
    margin: 10,
  },
  instructions: {
    textAlign: 'center',
    color: '#333333',
    marginBottom: 5,
  },
});
