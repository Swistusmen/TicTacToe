pipeline{
    agent any
    parameters {
        booleanParam(name: 'Refresh',
                    defaultValue: false,
                    description: 'Read Jenkinsfile and exit.')
    }
    stages{
        stage("build"){
            steps{
                echo "Building..."
                sh './scripts/premake.sh'
                sh './scripts/build.sh'
                echo "Finished"
            }
    }
        stage("tests"){
            steps{
                echo "Testing..."
                sh './scripts/run-tests.sh' 
                echo "Finished"
            }
        }
    }
}