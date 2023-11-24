
# react-native-noble-service-to-warrior

## Getting started

`$ npm install react-native-noble-service-to-warrior --save`

### Mostly automatic installation

`$ react-native link react-native-noble-service-to-warrior`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-noble-service-to-warrior` and add `RNNobleServiceToWarrior.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNNobleServiceToWarrior.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNNobleServiceToWarriorPackage;` to the imports at the top of the file
  - Add `new RNNobleServiceToWarriorPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-noble-service-to-warrior'
  	project(':react-native-noble-service-to-warrior').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-noble-service-to-warrior/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-noble-service-to-warrior')
  	```

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNNobleServiceToWarrior.sln` in `node_modules/react-native-noble-service-to-warrior/windows/RNNobleServiceToWarrior.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Noble.Service.To.Warrior.RNNobleServiceToWarrior;` to the usings at the top of the file
  - Add `new RNNobleServiceToWarriorPackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNNobleServiceToWarrior from 'react-native-noble-service-to-warrior';

// TODO: What to do with the module?
RNNobleServiceToWarrior;
```
  